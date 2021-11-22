/*
* @file Veri Yapıları Ödevi
* @description İki yönlü bağlı liste üzerinde verileri kaydırarak ekle ve sil fonksiyonlarını uygulamak.
* @course 1. öğretim B grubu
* @assignment 1. ödev
* @date 13.11.2021
* @author Mehmet Arı mehmet.ari4@ogr.sakarya.edu.tr
*/

#include <iostream>
#include <iomanip>
#include "liste.hpp"
#include "dugum.hpp"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    liste* Liste=new liste();

    ifstream readFile("Veri.txt");
	string satir;
    string islem;
    string indeks;
    string veri;
    
	while (getline(readFile, satir)) {
		if (satir[0] == 'E'||satir[0]=='e')
		{
			stringstream ss(satir);
			getline(ss, islem, '(');
			getline(ss, indeks, '#');
			getline(ss, veri, ')');

			Liste->ekle(stoi(indeks),veri);
		}
		if(satir[0]=='s'||satir[0]=='S')
		{
			stringstream ss(satir);
			getline(ss, islem, '(');
			getline(ss, indeks, ')');

			Liste->sil(stoi(indeks));
		}
	}
	readFile.close();
    cout<<*Liste;

}