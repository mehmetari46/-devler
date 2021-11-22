/****************************************************************************
**					          SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				          B�LG�SAYAR M�HEND�SL��� B�L�M�
**				            PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI....:1.PROJE
**				��RENC� ADI......:MEHMET ARI
**				��RENC� NUMARASI.:B201210086
**				DERS GRUBU.......:1.��RET�M A GRUBU
****************************************************************************/

#include <iostream>
#include<fstream>
#include<string>
#include <windows.h>
#include <stdio.h>
#include<chrono>
#include<ctime>

using namespace std;

int main(int argc, char* argv[])
{
    char giri�kay�t;
    int se�im;
    char cevap = 'e';
    cout << "1)Giris" << endl << "2)Kayit" << endl << endl;
    cout << "Secim:";
    cin >> giri�kay�t;
    system("cls");
    string isimkay�t;
    string soyisimkay�t;
    long �ifrekay�t;
    ofstream kullan�c�;
    switch (giri�kay�t)//Giri� yada kay�t se�ilmesine g�re i�lem yap�lmas� i�in switch case kulland�m.
    {
    case'2'://2.se�enek kay�t yapmak.
        kullan�c�.open("kullan�c�lar.txt", ios::app);
        do
        {
            cout << "Kullanici Adi:";
            cin >> isimkay�t;
            cout << "Kullanici Soyadi:";
            cin >> soyisimkay�t;
            cout << "Sifre:";
            cin >> �ifrekay�t;
            kullan�c� << isimkay�t << ' ' << soyisimkay�t << ' ' << �ifrekay�t << endl;
            cout << "Kayit Basarili" << endl;
            cout << "Yeni kayit yapmak istiyor musunuz?(e/h)" << endl;
            cin >> cevap;
        } while (!(cevap == 'h'));//Cevap hay�r olana kadar kay�t istemeye devam eder.
        kullan�c�.close();
        break;
    case'1'://1.se�enek giri� yapmak.
        string isim;
        string soyisim;
        int �ifre;
        ifstream kullan�c�("kullan�c�lar.txt");
        cout << "Kullanici Adi:";
        cin >> isim;
        cout << "Kullanici Soyadi:";
        cin >> soyisim;
        cout << "Sifre:";
        cin >> �ifre;
        system("cls");
        while (!kullan�c�.eof()) //Kullan�c� dosyas�ndaki t�m kullan�c�lar� okutur.
        {
            kullan�c� >> isimkay�t >> soyisimkay�t >> �ifrekay�t;
            if (isim == isimkay�t && soyisim == soyisimkay�t && �ifre == �ifrekay�t)//Girilen isim,soyisim ve �ifrenin kay�t i�erisinde olup olmad���n� kontrol eder.
            {
                //Giri� tarihini ve saatini tutar.
                auto start = chrono::system_clock::now();
                auto simdi = chrono::system_clock::to_time_t(start);
                char giri�saat[30];
                ctime_s(giri�saat, sizeof(giri�saat), &simdi);
                cout << "Giris Saatiniz:" << giri�saat << endl;
                char men�cevap = 'e';
                do
                {
                    cout << "1)Okuyucu Kaydi" << endl << "2)Okuyucu Kaydi Guncelleme" << endl << "3)Okuyucu Silme" << endl;
                    cout << "4)Okuyucu Uzerindeki Kitaplar Listesi" << endl << "5)Okuyucu Kitap Odunc Alma" << endl;
                    cout << "6)Okuyucu Kitap Geri Dondurme" << endl << "7)Kitap Ekleme" << endl;
                    cout << "8)Kitap Silme" << endl << "9)Kitap Duzeltme" << endl << endl;
                    cout << "Secim:";
                    cin >> se�im;
                    system("cls");
                    string okuyucuad;
                    string okuyucusoyad;
                    long long okuyucutc;
                    long long okuyucu�yeno;
                    long long okuyucutel;
                    string do�umtarih;
                    string g�rev;
                    long alabilecekkitap;
                    long long �d�n�isbn;
                    long long kitapisbn;
                    string �d�n�tarih;
                    string d�n��tarih;
                    string kitapisim;
                    string yazarad�;
                    string yazarsoyad�;
                    string kitapkonu;
                    string kitapt�r;
                    long long sayfasay�s�;
                    kullan�c�.close();
                    if (se�im == 1)//Okuyucu kayd� yap�lmak isteniyorsa �al���r.
                    {
                        ofstream okuyucu;
                        okuyucu.open("okuyucular.txt", ios::app);
                        char cevap1 = 'e';
                        do
                        {
                            cout << "Isim:"; cin >> okuyucuad;
                            cout << "Soyisim:"; cin >> okuyucusoyad;
                            cout << "TC.NO:"; cin >> okuyucutc;
                            cout << "Uye no:"; cin >> okuyucu�yeno;
                            cout << "Tel.No:"; cin >> okuyucutel;
                            cout << "Dogum Tarihi(gun.ay.yil):"; cin >> do�umtarih;
                            cout << "Gorevi:"; cin >> g�rev;
                            cout << "Alabilecegi Kitap Sayisi:"; cin >> alabilecekkitap;
                            okuyucu << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucu�yeno << " " << okuyucutel << " " << do�umtarih << " " << g�rev << " " << alabilecekkitap << endl;
                            cout << "Okuyucu Kayit Basarili" << endl;
                            cout << "Yeni kayit yapmak istiyor musun?(e/h)" << endl;
                            cin >> cevap1;
                        } while (!(cevap1 == 'h'));//Cevap hay�r olana kadar okuyucu kayd� istemeye devam eder.
                        okuyucu.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 2)//Okuyucu kayd� g�ncellenmek isteniyorsa �al���r.
                    {
                        long long aranantcno;
                        cout << "Guncellenecek kisi TC no:"; cin >> aranantcno;
                        system("cls");
                        ifstream okuyucu("okuyucular.txt");
                        ofstream okuyucuyaz("okuyucular.tmp");
                        while (true) //��lem do�ru oldu�u s�rece d�ng� devam eder.
                        {
                            okuyucu >> okuyucuad >> okuyucusoyad >> okuyucutc >> okuyucu�yeno >> okuyucutel >> do�umtarih >> g�rev >> alabilecekkitap;
                            if (okuyucu.eof())break;//Okuyucu dosyas�ndaki t�m de�erler okutuluyor mu kontrol edilir.
                            else if (aranantcno == okuyucutc)//Girilen TC no ile okuyucu TC no e�le�iyorsa yeni okuyucu de�erlerini ister.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << okuyucuad << endl << okuyucusoyad << endl << okuyucutc << endl << okuyucu�yeno << endl << okuyucutel << endl << do�umtarih << endl << g�rev << endl << alabilecekkitap << endl << endl;
                                cout << "Kayit guncelle" << endl;
                                cout << "Isim:"; cin >> okuyucuad;
                                cout << "Soyisim:"; cin >> okuyucusoyad;
                                cout << "TC.NO:"; cin >> okuyucutc;
                                cout << "Uye no:"; cin >> okuyucu�yeno;
                                cout << "Tel.No:"; cin >> okuyucutel;
                                cout << "Dogum Tarihi(gun.ay.yil):"; cin >> do�umtarih;
                                cout << "Gorevi:"; cin >> g�rev;
                                cout << "Alabilecegi Kitap Sayisi:"; cin >> alabilecekkitap;
                                okuyucuyaz << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucu�yeno << " " << okuyucutel << " " << do�umtarih << " " << g�rev << " " << alabilecekkitap << endl;
                                cout << "Guncelleme Basarili" << endl;
                            }
                            else if (aranantcno != okuyucutc)//Girilen TC no ile okuyucu TC no e�le�miyorsa yeni kay�t al�nmadan ayn� de�erler yeni dosyaya kaydedilir.
                            {
                                okuyucuyaz << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucu�yeno << " " << okuyucutel << " " << do�umtarih << " " << g�rev << " " << alabilecekkitap << endl;
                            }
                        }                       
                        okuyucuyaz.close();
                        okuyucu.close();
                        remove("okuyucular.txt");
                        rename("okuyucular.tmp", "okuyucular.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 3)//Okuyucu silmek isteniyorsa �al���r.
                    {
                        long long aranantcno;
                        cout << "Silinecek kisi TC no:"; cin >> aranantcno;
                        system("cls");
                        ifstream okuyucu("okuyucular.txt");
                        ofstream okuyucuyaz("okuyucular.tmp");
                        while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                        {
                            okuyucu >> okuyucuad >> okuyucusoyad >> okuyucutc >> okuyucu�yeno >> okuyucutel >> do�umtarih >> g�rev >> alabilecekkitap;
                            if (okuyucu.eof())break;//Okuyucu dosyas�ndaki t�m de�erler okutuluyor mu kontrol edilir.
                            else if (aranantcno == okuyucutc)//Girilen TC no ile okuyucu TC no e�le�iyor ise kay�tl� dosyay� ekrana ��kart�r.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << okuyucuad << endl << okuyucusoyad << endl << okuyucutc << endl << okuyucu�yeno << endl << okuyucutel << endl << do�umtarih << endl << g�rev << endl << alabilecekkitap << endl;
                                ifstream �d�n�("�d�n�ler.txt");
                                ofstream �d�n�yaz("�d�n�ler.tmp");
                                while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                                {
                                    �d�n� >> �d�n�isbn >> okuyucutc >> �d�n�tarih >> d�n��tarih;
                                    if (�d�n�.eof())break;//�d�n� dosyas�ndaki t�m de�erler okutuluyor mu kontrol eder.
                                    else if (aranantcno != okuyucutc)//Girilen TC no ile okuyucu TC no e�le�miyorsa eski �d�n� dosyas�ndaki de�erler aynen yeni dosyaya yaz�l�r.
                                    {
                                        �d�n�yaz << �d�n�isbn << " " << okuyucutc << " " << �d�n�tarih << " " << d�n��tarih << endl;
                                    }
                                }
                                cout << "Silinme Basarili" << endl;
                                �d�n�yaz.close();
                                �d�n�.close();
                                remove("�d�n�ler.txt");
                                rename("�d�n�ler.tmp", "�d�n�ler.txt");
                            }
                            else if (aranantcno != okuyucutc)//Girilen TC no ile okuyucu TC no e�le�miyorsa eski okuyucu dosyas�ndaki de�erler aynen yeni dosyaya yaz�l�r.
                            {
                                okuyucuyaz << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucu�yeno << " " << okuyucutel << " " << do�umtarih << " " << g�rev << " " << alabilecekkitap << endl;
                            }
                        }
                        okuyucuyaz.close();
                        okuyucu.close();
                        remove("okuyucular.txt");
                        rename("okuyucular.tmp", "okuyucular.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 4)//Okuyucu �zerindeki kitaplar�n g�r�lmesi istendi�inde �al���r.
                    {
                        long long tcde�er;
                        cout << "TC.No:"; cin >> tcde�er;
                        ifstream �d�n�("�d�n�ler.txt");
                        while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                        {
                            �d�n� >> �d�n�isbn >> okuyucutc >> �d�n�tarih >> d�n��tarih;
                            if (�d�n�.eof())break;//�d�n� dosyas�ndaki t�m de�erler okutuluyor mu kontrol eder.
                            else if (okuyucutc == tcde�er)//Girilen TC ile okuyucu TC e�le�iyorsa okuyucu �zerindeki kitap listesi ekrana ��kart�l�r.
                            {
                                ifstream kitap("kitaplar.txt");
                                while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                                {
                                    kitap >> kitapisbn >> kitapisim >> yazarad� >> yazarsoyad� >> kitapkonu >> kitapt�r >> sayfasay�s�;
                                    if (kitap.eof())break;//Kitap dosyas�ndaki t�m de�erler okutuluyor mu kontrol eder.
                                    else if (�d�n�isbn == kitapisbn)//�d�n� isbn ve kitap isbn e�le�iyorsa o isbn numaras�na kay�tl� kitap bilgileri ekrana ��kart�l�r.
                                    {
                                        cout << kitapisbn << endl << kitapisim << endl << yazarad� << endl << yazarsoyad� << endl << kitapkonu << endl << kitapt�r << endl << sayfasay�s� << endl << endl;
                                    }
                                }
                                kitap.close();
                            }
                        }
                        �d�n�.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 5)//Kitap �d�n� almak istendi�inde �al���r.
                    {
                        ofstream �d�n�;
                        �d�n�.open("�d�n�ler.txt", ios::app);
                        char cevap2 = 'e';
                        do
                        {
                            cout << "ISBN:"; cin >> �d�n�isbn;
                            cout << "TC.No:"; cin >> okuyucutc;
                            cout << "Odunc tarihi(gun.ay.yil):"; cin >> �d�n�tarih;
                            cout << "Donus tarihi(gun.ay.yil):"; cin >> d�n��tarih;
                            �d�n� << �d�n�isbn << " " << okuyucutc << " " << �d�n�tarih << " " << d�n��tarih << endl;
                            cout << "Odunc Kayit Basarili" << endl;
                            cout << "Yeni odunc almak istiyor musunuz?(e/h)" << endl;
                            cin >> cevap2;
                        } while (!(cevap2 == 'h'));//Cevap hay�r olana kadar �d�n� kay�t istemeye devam eder.
                        �d�n�.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 6)//�d�n� al�nan kitab� iade etmek istendi�inde �al���r.
                    {
                        long long arananisbn;
                        cout << "Geri dondurulecek kitap isbn no:"; cin >> arananisbn;
                        ifstream �d�n�("�d�n�ler.txt");
                        ofstream �d�n�yaz("�d�n�ler.tmp");
                        while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                        {
                            �d�n� >> �d�n�isbn >> okuyucutc >> �d�n�tarih >> d�n��tarih;
                            if (�d�n�.eof())break;//�d�n� dosyas�ndaki t�m de�erler okutuluyor mu kontrol eder.
                            else if (arananisbn == �d�n�isbn)//Girilen isbn ile �d�n� isbn e�le�iyorsa kay�tl� dosyay� ekrana ��kart�r.
                            {
                                cout << "Kayitli dosya" << endl;
                                ifstream kitap("kitaplar.txt");
                                while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                                {
                                    kitap >> kitapisbn >> kitapisim >> yazarad� >> yazarsoyad� >> kitapkonu >> kitapt�r >> sayfasay�s�;
                                    if (kitap.eof())break;//Kitap dosyas�ndaki t�m de�erler okutuluyor mu kontrol eder.
                                    else if (�d�n�isbn == kitapisbn)//�d�n� isbn ve kitap isbn e�le�iyorsa o isbn numaras�na kay�tl� kitap bilgileri ekrana ��kart�l�r.
                                    {
                                        cout << kitapisbn << endl << kitapisim << endl << yazarad� << endl << yazarsoyad� << endl << kitapkonu << endl << kitapt�r << endl << sayfasay�s� << endl;
                                    }
                                }
                                kitap.close();
                                cout << "Odunc Geri Dondurme Basarili" << endl;
                            }
                            else if (arananisbn != �d�n�isbn)//Aranan isbn ile �d�n� isbn e�le�miyorsa eski �d�n� dosyas� aynen yeni dosyaya yazd�r�l�r.
                            {
                                �d�n�yaz << �d�n�isbn << " " << okuyucutc << " " << �d�n�tarih << " " << d�n��tarih << endl;
                            }

                        }
                        �d�n�yaz.close();
                        �d�n�.close();
                        remove("�d�n�ler.txt");
                        rename("�d�n�ler.tmp", "�d�n�ler.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 7)//Kitap eklemek istendi�inde �al��t�r�l�r.
                    {
                        ofstream kitap;
                        kitap.open("kitaplar.txt", ios::app);
                        char cevap3 = 'e';
                        do
                        {
                            cout << "ISBN:"; cin >> kitapisbn;
                            cout << "Kitap ismi:"; cin >> kitapisim;
                            cout << "Yazar adi:"; cin >> yazarad�;
                            cout << "Yazar soyadi:"; cin >> yazarsoyad�;
                            cout << "Konu:"; cin >> kitapkonu;
                            cout << "Tur:"; cin >> kitapt�r;
                            cout << "Sayfa sayisi:"; cin >> sayfasay�s�;
                            kitap << kitapisbn << " " << kitapisim << " " << yazarad� << " " << yazarsoyad� << " " << kitapkonu << " " << kitapt�r << " " << sayfasay�s� << endl;
                            cout << "Kitap Kayit Basarili" << endl;
                            cout << "Yeni kayit yapmak istiyor musunuz?(e/h)";
                            cin >> cevap3;
                        } while (!(cevap3 == 'h'));//Cevap hay�r olana kadar kitap kayd� istemeye devam eder.
                        kitap.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 8)//Kitap kayd� silmek istendi�inde �al��t�r�l�r.
                    {
                        long long arananisbn;
                        cout << "Silinecek kitap isbn:"; cin >> arananisbn;
                        system("cls");
                        ifstream kitap("kitaplar.txt");
                        ofstream kitapyaz("kitaplar.tmp");
                        while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                        {
                            kitap >> kitapisbn >> kitapisim >> yazarad� >> yazarsoyad� >> kitapkonu >> kitapt�r >> sayfasay�s�;
                            if (kitap.eof())break;//Kitap dosyas�ndaki t�m de�erler okutuluyor mu kontrol eder.
                            else if (arananisbn == kitapisbn)//Aranan isbn ile kitap isbn e�le�iyorsa kay�tl� dosya ekrana ��kart�l�r.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << kitapisbn << endl << kitapisim << endl << yazarad� << endl << yazarsoyad� << endl << kitapkonu << endl << kitapt�r << endl << sayfasay�s� << endl;
                                cout << "Kitap Silme Basarili" << endl;
                            }
                            else if (arananisbn != kitapisbn)//Aranan isbn ile kitap isbn e�le�miyorsa eski kitap dosyas� aynen yeni dosyaya yaz�l�r.
                            {
                                kitapyaz << kitapisbn << " " << kitapisim << " " << yazarad� << " " << yazarsoyad� << " " << kitapkonu << " " << kitapt�r << " " << sayfasay�s� << endl;
                            }
                        }
                        kitapyaz.close();
                        kitap.close();
                        remove("kitaplar.txt");
                        rename("kitaplar.tmp", "kitaplar.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                    if (se�im == 9)//Kitap kayd� g�ncellenmek istendi�inde �al��t�r�l�r.
                    {
                        long long arananisbn;
                        cout << "Guncellenecek kitap isbn:"; cin >> arananisbn;
                        system("cls");
                        ifstream kitap("kitaplar.txt");
                        ofstream kitapyaz("kitaplar.tmp");
                        while (true)//��lem do�ru oldu�u s�rece d�ng� devam eder.
                        {
                            kitap >> kitapisbn >> kitapisim >> yazarad� >> yazarsoyad� >> kitapkonu >> kitapt�r >> sayfasay�s�;
                            if (kitap.eof())break;//Kitap dosyas�ndaki t�m de�erler okutuluyor mu kontrol eder.
                            else if (arananisbn == kitapisbn)//Aranan isbn ile kitap isbn e�le�iyorsa kay�tl� dosya ekrana ��kart�l�r ve yeni de�erler istenerek yeni dosyaya kaydedilir.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << kitapisbn << endl << kitapisim << endl << yazarad� << endl << yazarsoyad� << endl << kitapkonu << endl << kitapt�r << endl << sayfasay�s� << endl << endl;
                                cout << "ISBN:"; cin >> kitapisbn;
                                cout << "Kitap ismi:"; cin >> kitapisim;
                                cout << "Yazar adi:"; cin >> yazarad�;
                                cout << "Yazar soyadi:"; cin >> yazarsoyad�;
                                cout << "Konu:"; cin >> kitapkonu;
                                cout << "Tur:"; cin >> kitapt�r;
                                cout << "Sayfa sayisi:"; cin >> sayfasay�s�;
                                kitapyaz << kitapisbn << " " << kitapisim << " " << yazarad� << " " << yazarsoyad� << " " << kitapkonu << " " << kitapt�r << " " << sayfasay�s� << endl;
                                cout << "Guncelleme Basarili" << endl;
                            }
                            else if (arananisbn != kitapisbn)//Aranan isbn ile kitap isbn e�le�miyorsa eski kitap dosyas�ndaki de�erler aynen yeni dosyaya kaydedilir.
                            {
                                kitapyaz << kitapisbn << " " << kitapisim << " " << yazarad� << " " << yazarsoyad� << " " << kitapkonu << " " << kitapt�r << " " << sayfasay�s� << endl;
                            }
                        }
                        kitapyaz.close();
                        kitap.close();
                        remove("kitaplar.txt");
                        rename("kitaplar.tmp", "kitaplar.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> men�cevap;
                        system("cls");
                    }
                } while (!(men�cevap == 'h'));//Cevap hay�r olursa program sonlan�r,evet olursa men�ye geri d�ner.
                {
                    //��k�� tarihini ve saatini tutar.
                    auto start = chrono::system_clock::now();
                    auto simdi = chrono::system_clock::to_time_t(start);
                    char ��k��saat[30];
                    ctime_s(��k��saat, sizeof(��k��saat), &simdi);
                    cout << "Cikis Saatiniz:" << ��k��saat << endl;
                    exit(1);
                }
            }
        }
        break;
    }
    cin.get();
}