/*
* @file Veri Yapıları Ödevi
* @description İki yönlü bağlı liste üzerinde verileri kaydırarak ekle ve sil fonksiyonlarını uygulamak.
* @course 1. öğretim B grubu
* @assignment 1. ödev
* @date 13.11.2021
* @author Mehmet Arı mehmet.ari4@ogr.sakarya.edu.tr
*/


#include "liste.hpp"
#include <iomanip>
#include <string>

liste::liste()
{
    ilk=0;
    uzunluk=0;
}
liste::~liste()
{
    dugum* gec=ilk;
    while(gec!=0)
    {
        dugum* silinecek=gec;
        gec=gec->sonraki;
        delete silinecek;
    }
}

void liste::ekle(int sira,string veri)
{
    if(sira<0||sira>uzunluk)
    sira=uzunluk;
    if(uzunluk==0&&ilk==0)
    {
        ilk = new dugum(veri);
    }
    else
    {
        int yeniuzunluk=uzunluk;
        dugum* aktifdugum = dugumgetir(yeniuzunluk-1);
        aktifdugum->sonraki=new dugum("");
        aktifdugum->sonraki->sonraki=0;
        aktifdugum->sonraki->onceki=aktifdugum;

        for(int i=yeniuzunluk;i>sira;i--)
        {
            aktifdugum = dugumgetir(yeniuzunluk-1);
            aktifdugum->sonraki->veri=aktifdugum->veri;
            yeniuzunluk--;
        }
        aktifdugum = dugumgetir(sira);
        aktifdugum->veri=veri;
    }
    uzunluk++;
}

void liste::sil(int sira)
{
    if(sira<0||sira>=uzunluk)
    {
        sira=uzunluk-1;
    }
	dugum* aktifdugum;
	if (uzunluk==1)
	{
        ilk=NULL;
		
	}
	else{
        int yeniuzunluk=uzunluk;
        for(int i=sira;i<yeniuzunluk-1;i++)
        {
            aktifdugum = dugumgetir(sira);
            aktifdugum->veri=aktifdugum->sonraki->veri;
            sira++;
        }
   	    aktifdugum = dugumgetir(uzunluk-1);
   	    aktifdugum->onceki->sonraki = NULL;
	    delete aktifdugum;
    }

    uzunluk--;
}

dugum* liste::dugumgetir(int sira)
{
    dugum* gec=ilk;

    while(sira>=0&&gec!=0)
    {
        if(sira==0)
           return gec;
        gec=gec->sonraki;
        sira--;
    }
    return 0;
}

ostream& operator<<(ostream& os,liste& liste)
{
    using namespace std;

    dugum* gec= liste.ilk;
    os<<endl;
    while(gec!=0)
    {
        os<<"<-->"<<gec->veri;
        gec=gec->sonraki;
    }
    os<<endl<<endl;
    return os;
}