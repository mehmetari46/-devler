/*
* @file Veri Yapıları Ödevi
* @description İki yönlü bağlı liste üzerinde verileri kaydırarak ekle ve sil fonksiyonlarını uygulamak.
* @course 1. öğretim B grubu
* @assignment 1. ödev
* @date 13.11.2021
* @author Mehmet Arı mehmet.ari4@ogr.sakarya.edu.tr
*/

#ifndef liste_hpp
#define liste_hpp
#include <exception>
#include <iostream>
#include "dugum.hpp"
#include <string>

class liste
    {
        public:
        liste();
        ~liste();
        void sil(int sira);
        void ekle(int sira,string veri);
        friend ostream& operator<<(ostream& os,liste& liste);

        private:
        dugum* dugumgetir(int sira);
        dugum* ilk;
        int uzunluk=0;
    };


#endif
