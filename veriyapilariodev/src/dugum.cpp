/*
* @file Veri Yapıları Ödevi
* @description İki yönlü bağlı liste üzerinde verileri kaydırarak ekle ve sil fonksiyonlarını uygulamak.
* @course 1. öğretim B grubu
* @assignment 1. ödev
* @date 13.11.2021
* @author Mehmet Arı mehmet.ari4@ogr.sakarya.edu.tr
*/

#include "dugum.hpp"
#include <string>

dugum::dugum(string veri)
{
    this->veri=veri;
    sonraki=onceki=0;
}
dugum::~dugum()
{
    
}