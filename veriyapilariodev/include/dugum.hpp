/*
* @file Veri Yapıları Ödevi
* @description İki yönlü bağlı liste üzerinde verileri kaydırarak ekle ve sil fonksiyonlarını uygulamak.
* @course 1. öğretim B grubu
* @assignment 1. ödev
* @date 13.11.2021
* @author Mehmet Arı mehmet.ari4@ogr.sakarya.edu.tr
*/

#ifndef dugum_hpp
#define dugum_hpp
#include <iostream>
#include <string>

using namespace std;

class dugum
    {
        public:
        dugum(string veri);
        ~dugum();
        string veri;
        dugum* onceki;
        dugum* sonraki;
    };


#endif