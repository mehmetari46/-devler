/****************************************************************************
**					          SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				          BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				            PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI....:1.PROJE
**				ÖÐRENCÝ ADI......:MEHMET ARI
**				ÖÐRENCÝ NUMARASI.:B201210086
**				DERS GRUBU.......:1.ÖÐRETÝM A GRUBU
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
    char giriþkayýt;
    int seçim;
    char cevap = 'e';
    cout << "1)Giris" << endl << "2)Kayit" << endl << endl;
    cout << "Secim:";
    cin >> giriþkayýt;
    system("cls");
    string isimkayýt;
    string soyisimkayýt;
    long þifrekayýt;
    ofstream kullanýcý;
    switch (giriþkayýt)//Giriþ yada kayýt seçilmesine göre iþlem yapýlmasý için switch case kullandým.
    {
    case'2'://2.seçenek kayýt yapmak.
        kullanýcý.open("kullanýcýlar.txt", ios::app);
        do
        {
            cout << "Kullanici Adi:";
            cin >> isimkayýt;
            cout << "Kullanici Soyadi:";
            cin >> soyisimkayýt;
            cout << "Sifre:";
            cin >> þifrekayýt;
            kullanýcý << isimkayýt << ' ' << soyisimkayýt << ' ' << þifrekayýt << endl;
            cout << "Kayit Basarili" << endl;
            cout << "Yeni kayit yapmak istiyor musunuz?(e/h)" << endl;
            cin >> cevap;
        } while (!(cevap == 'h'));//Cevap hayýr olana kadar kayýt istemeye devam eder.
        kullanýcý.close();
        break;
    case'1'://1.seçenek giriþ yapmak.
        string isim;
        string soyisim;
        int þifre;
        ifstream kullanýcý("kullanýcýlar.txt");
        cout << "Kullanici Adi:";
        cin >> isim;
        cout << "Kullanici Soyadi:";
        cin >> soyisim;
        cout << "Sifre:";
        cin >> þifre;
        system("cls");
        while (!kullanýcý.eof()) //Kullanýcý dosyasýndaki tüm kullanýcýlarý okutur.
        {
            kullanýcý >> isimkayýt >> soyisimkayýt >> þifrekayýt;
            if (isim == isimkayýt && soyisim == soyisimkayýt && þifre == þifrekayýt)//Girilen isim,soyisim ve þifrenin kayýt içerisinde olup olmadýðýný kontrol eder.
            {
                //Giriþ tarihini ve saatini tutar.
                auto start = chrono::system_clock::now();
                auto simdi = chrono::system_clock::to_time_t(start);
                char giriþsaat[30];
                ctime_s(giriþsaat, sizeof(giriþsaat), &simdi);
                cout << "Giris Saatiniz:" << giriþsaat << endl;
                char menücevap = 'e';
                do
                {
                    cout << "1)Okuyucu Kaydi" << endl << "2)Okuyucu Kaydi Guncelleme" << endl << "3)Okuyucu Silme" << endl;
                    cout << "4)Okuyucu Uzerindeki Kitaplar Listesi" << endl << "5)Okuyucu Kitap Odunc Alma" << endl;
                    cout << "6)Okuyucu Kitap Geri Dondurme" << endl << "7)Kitap Ekleme" << endl;
                    cout << "8)Kitap Silme" << endl << "9)Kitap Duzeltme" << endl << endl;
                    cout << "Secim:";
                    cin >> seçim;
                    system("cls");
                    string okuyucuad;
                    string okuyucusoyad;
                    long long okuyucutc;
                    long long okuyucuüyeno;
                    long long okuyucutel;
                    string doðumtarih;
                    string görev;
                    long alabilecekkitap;
                    long long ödünçisbn;
                    long long kitapisbn;
                    string ödünçtarih;
                    string dönüþtarih;
                    string kitapisim;
                    string yazaradý;
                    string yazarsoyadý;
                    string kitapkonu;
                    string kitaptür;
                    long long sayfasayýsý;
                    kullanýcý.close();
                    if (seçim == 1)//Okuyucu kaydý yapýlmak isteniyorsa çalýþýr.
                    {
                        ofstream okuyucu;
                        okuyucu.open("okuyucular.txt", ios::app);
                        char cevap1 = 'e';
                        do
                        {
                            cout << "Isim:"; cin >> okuyucuad;
                            cout << "Soyisim:"; cin >> okuyucusoyad;
                            cout << "TC.NO:"; cin >> okuyucutc;
                            cout << "Uye no:"; cin >> okuyucuüyeno;
                            cout << "Tel.No:"; cin >> okuyucutel;
                            cout << "Dogum Tarihi(gun.ay.yil):"; cin >> doðumtarih;
                            cout << "Gorevi:"; cin >> görev;
                            cout << "Alabilecegi Kitap Sayisi:"; cin >> alabilecekkitap;
                            okuyucu << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucuüyeno << " " << okuyucutel << " " << doðumtarih << " " << görev << " " << alabilecekkitap << endl;
                            cout << "Okuyucu Kayit Basarili" << endl;
                            cout << "Yeni kayit yapmak istiyor musun?(e/h)" << endl;
                            cin >> cevap1;
                        } while (!(cevap1 == 'h'));//Cevap hayýr olana kadar okuyucu kaydý istemeye devam eder.
                        okuyucu.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 2)//Okuyucu kaydý güncellenmek isteniyorsa çalýþýr.
                    {
                        long long aranantcno;
                        cout << "Guncellenecek kisi TC no:"; cin >> aranantcno;
                        system("cls");
                        ifstream okuyucu("okuyucular.txt");
                        ofstream okuyucuyaz("okuyucular.tmp");
                        while (true) //Ýþlem doðru olduðu sürece döngü devam eder.
                        {
                            okuyucu >> okuyucuad >> okuyucusoyad >> okuyucutc >> okuyucuüyeno >> okuyucutel >> doðumtarih >> görev >> alabilecekkitap;
                            if (okuyucu.eof())break;//Okuyucu dosyasýndaki tüm deðerler okutuluyor mu kontrol edilir.
                            else if (aranantcno == okuyucutc)//Girilen TC no ile okuyucu TC no eþleþiyorsa yeni okuyucu deðerlerini ister.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << okuyucuad << endl << okuyucusoyad << endl << okuyucutc << endl << okuyucuüyeno << endl << okuyucutel << endl << doðumtarih << endl << görev << endl << alabilecekkitap << endl << endl;
                                cout << "Kayit guncelle" << endl;
                                cout << "Isim:"; cin >> okuyucuad;
                                cout << "Soyisim:"; cin >> okuyucusoyad;
                                cout << "TC.NO:"; cin >> okuyucutc;
                                cout << "Uye no:"; cin >> okuyucuüyeno;
                                cout << "Tel.No:"; cin >> okuyucutel;
                                cout << "Dogum Tarihi(gun.ay.yil):"; cin >> doðumtarih;
                                cout << "Gorevi:"; cin >> görev;
                                cout << "Alabilecegi Kitap Sayisi:"; cin >> alabilecekkitap;
                                okuyucuyaz << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucuüyeno << " " << okuyucutel << " " << doðumtarih << " " << görev << " " << alabilecekkitap << endl;
                                cout << "Guncelleme Basarili" << endl;
                            }
                            else if (aranantcno != okuyucutc)//Girilen TC no ile okuyucu TC no eþleþmiyorsa yeni kayýt alýnmadan ayný deðerler yeni dosyaya kaydedilir.
                            {
                                okuyucuyaz << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucuüyeno << " " << okuyucutel << " " << doðumtarih << " " << görev << " " << alabilecekkitap << endl;
                            }
                        }                       
                        okuyucuyaz.close();
                        okuyucu.close();
                        remove("okuyucular.txt");
                        rename("okuyucular.tmp", "okuyucular.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 3)//Okuyucu silmek isteniyorsa çalýþýr.
                    {
                        long long aranantcno;
                        cout << "Silinecek kisi TC no:"; cin >> aranantcno;
                        system("cls");
                        ifstream okuyucu("okuyucular.txt");
                        ofstream okuyucuyaz("okuyucular.tmp");
                        while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                        {
                            okuyucu >> okuyucuad >> okuyucusoyad >> okuyucutc >> okuyucuüyeno >> okuyucutel >> doðumtarih >> görev >> alabilecekkitap;
                            if (okuyucu.eof())break;//Okuyucu dosyasýndaki tüm deðerler okutuluyor mu kontrol edilir.
                            else if (aranantcno == okuyucutc)//Girilen TC no ile okuyucu TC no eþleþiyor ise kayýtlý dosyayý ekrana çýkartýr.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << okuyucuad << endl << okuyucusoyad << endl << okuyucutc << endl << okuyucuüyeno << endl << okuyucutel << endl << doðumtarih << endl << görev << endl << alabilecekkitap << endl;
                                ifstream ödünç("ödünçler.txt");
                                ofstream ödünçyaz("ödünçler.tmp");
                                while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                                {
                                    ödünç >> ödünçisbn >> okuyucutc >> ödünçtarih >> dönüþtarih;
                                    if (ödünç.eof())break;//Ödünç dosyasýndaki tüm deðerler okutuluyor mu kontrol eder.
                                    else if (aranantcno != okuyucutc)//Girilen TC no ile okuyucu TC no eþleþmiyorsa eski ödünç dosyasýndaki deðerler aynen yeni dosyaya yazýlýr.
                                    {
                                        ödünçyaz << ödünçisbn << " " << okuyucutc << " " << ödünçtarih << " " << dönüþtarih << endl;
                                    }
                                }
                                cout << "Silinme Basarili" << endl;
                                ödünçyaz.close();
                                ödünç.close();
                                remove("ödünçler.txt");
                                rename("ödünçler.tmp", "ödünçler.txt");
                            }
                            else if (aranantcno != okuyucutc)//Girilen TC no ile okuyucu TC no eþleþmiyorsa eski okuyucu dosyasýndaki deðerler aynen yeni dosyaya yazýlýr.
                            {
                                okuyucuyaz << okuyucuad << " " << okuyucusoyad << " " << okuyucutc << " " << okuyucuüyeno << " " << okuyucutel << " " << doðumtarih << " " << görev << " " << alabilecekkitap << endl;
                            }
                        }
                        okuyucuyaz.close();
                        okuyucu.close();
                        remove("okuyucular.txt");
                        rename("okuyucular.tmp", "okuyucular.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 4)//Okuyucu üzerindeki kitaplarýn görülmesi istendiðinde çalýþýr.
                    {
                        long long tcdeðer;
                        cout << "TC.No:"; cin >> tcdeðer;
                        ifstream ödünç("ödünçler.txt");
                        while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                        {
                            ödünç >> ödünçisbn >> okuyucutc >> ödünçtarih >> dönüþtarih;
                            if (ödünç.eof())break;//Ödünç dosyasýndaki tüm deðerler okutuluyor mu kontrol eder.
                            else if (okuyucutc == tcdeðer)//Girilen TC ile okuyucu TC eþleþiyorsa okuyucu üzerindeki kitap listesi ekrana çýkartýlýr.
                            {
                                ifstream kitap("kitaplar.txt");
                                while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                                {
                                    kitap >> kitapisbn >> kitapisim >> yazaradý >> yazarsoyadý >> kitapkonu >> kitaptür >> sayfasayýsý;
                                    if (kitap.eof())break;//Kitap dosyasýndaki tüm deðerler okutuluyor mu kontrol eder.
                                    else if (ödünçisbn == kitapisbn)//Ödünç isbn ve kitap isbn eþleþiyorsa o isbn numarasýna kayýtlý kitap bilgileri ekrana çýkartýlýr.
                                    {
                                        cout << kitapisbn << endl << kitapisim << endl << yazaradý << endl << yazarsoyadý << endl << kitapkonu << endl << kitaptür << endl << sayfasayýsý << endl << endl;
                                    }
                                }
                                kitap.close();
                            }
                        }
                        ödünç.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 5)//Kitap ödünç almak istendiðinde çalýþýr.
                    {
                        ofstream ödünç;
                        ödünç.open("ödünçler.txt", ios::app);
                        char cevap2 = 'e';
                        do
                        {
                            cout << "ISBN:"; cin >> ödünçisbn;
                            cout << "TC.No:"; cin >> okuyucutc;
                            cout << "Odunc tarihi(gun.ay.yil):"; cin >> ödünçtarih;
                            cout << "Donus tarihi(gun.ay.yil):"; cin >> dönüþtarih;
                            ödünç << ödünçisbn << " " << okuyucutc << " " << ödünçtarih << " " << dönüþtarih << endl;
                            cout << "Odunc Kayit Basarili" << endl;
                            cout << "Yeni odunc almak istiyor musunuz?(e/h)" << endl;
                            cin >> cevap2;
                        } while (!(cevap2 == 'h'));//Cevap hayýr olana kadar ödünç kayýt istemeye devam eder.
                        ödünç.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 6)//Ödünç alýnan kitabý iade etmek istendiðinde çalýþýr.
                    {
                        long long arananisbn;
                        cout << "Geri dondurulecek kitap isbn no:"; cin >> arananisbn;
                        ifstream ödünç("ödünçler.txt");
                        ofstream ödünçyaz("ödünçler.tmp");
                        while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                        {
                            ödünç >> ödünçisbn >> okuyucutc >> ödünçtarih >> dönüþtarih;
                            if (ödünç.eof())break;//Ödünç dosyasýndaki tüm deðerler okutuluyor mu kontrol eder.
                            else if (arananisbn == ödünçisbn)//Girilen isbn ile ödünç isbn eþleþiyorsa kayýtlý dosyayý ekrana çýkartýr.
                            {
                                cout << "Kayitli dosya" << endl;
                                ifstream kitap("kitaplar.txt");
                                while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                                {
                                    kitap >> kitapisbn >> kitapisim >> yazaradý >> yazarsoyadý >> kitapkonu >> kitaptür >> sayfasayýsý;
                                    if (kitap.eof())break;//Kitap dosyasýndaki tüm deðerler okutuluyor mu kontrol eder.
                                    else if (ödünçisbn == kitapisbn)//Ödünç isbn ve kitap isbn eþleþiyorsa o isbn numarasýna kayýtlý kitap bilgileri ekrana çýkartýlýr.
                                    {
                                        cout << kitapisbn << endl << kitapisim << endl << yazaradý << endl << yazarsoyadý << endl << kitapkonu << endl << kitaptür << endl << sayfasayýsý << endl;
                                    }
                                }
                                kitap.close();
                                cout << "Odunc Geri Dondurme Basarili" << endl;
                            }
                            else if (arananisbn != ödünçisbn)//Aranan isbn ile ödünç isbn eþleþmiyorsa eski ödünç dosyasý aynen yeni dosyaya yazdýrýlýr.
                            {
                                ödünçyaz << ödünçisbn << " " << okuyucutc << " " << ödünçtarih << " " << dönüþtarih << endl;
                            }

                        }
                        ödünçyaz.close();
                        ödünç.close();
                        remove("ödünçler.txt");
                        rename("ödünçler.tmp", "ödünçler.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 7)//Kitap eklemek istendiðinde çalýþtýrýlýr.
                    {
                        ofstream kitap;
                        kitap.open("kitaplar.txt", ios::app);
                        char cevap3 = 'e';
                        do
                        {
                            cout << "ISBN:"; cin >> kitapisbn;
                            cout << "Kitap ismi:"; cin >> kitapisim;
                            cout << "Yazar adi:"; cin >> yazaradý;
                            cout << "Yazar soyadi:"; cin >> yazarsoyadý;
                            cout << "Konu:"; cin >> kitapkonu;
                            cout << "Tur:"; cin >> kitaptür;
                            cout << "Sayfa sayisi:"; cin >> sayfasayýsý;
                            kitap << kitapisbn << " " << kitapisim << " " << yazaradý << " " << yazarsoyadý << " " << kitapkonu << " " << kitaptür << " " << sayfasayýsý << endl;
                            cout << "Kitap Kayit Basarili" << endl;
                            cout << "Yeni kayit yapmak istiyor musunuz?(e/h)";
                            cin >> cevap3;
                        } while (!(cevap3 == 'h'));//Cevap hayýr olana kadar kitap kaydý istemeye devam eder.
                        kitap.close();
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 8)//Kitap kaydý silmek istendiðinde çalýþtýrýlýr.
                    {
                        long long arananisbn;
                        cout << "Silinecek kitap isbn:"; cin >> arananisbn;
                        system("cls");
                        ifstream kitap("kitaplar.txt");
                        ofstream kitapyaz("kitaplar.tmp");
                        while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                        {
                            kitap >> kitapisbn >> kitapisim >> yazaradý >> yazarsoyadý >> kitapkonu >> kitaptür >> sayfasayýsý;
                            if (kitap.eof())break;//Kitap dosyasýndaki tüm deðerler okutuluyor mu kontrol eder.
                            else if (arananisbn == kitapisbn)//Aranan isbn ile kitap isbn eþleþiyorsa kayýtlý dosya ekrana çýkartýlýr.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << kitapisbn << endl << kitapisim << endl << yazaradý << endl << yazarsoyadý << endl << kitapkonu << endl << kitaptür << endl << sayfasayýsý << endl;
                                cout << "Kitap Silme Basarili" << endl;
                            }
                            else if (arananisbn != kitapisbn)//Aranan isbn ile kitap isbn eþleþmiyorsa eski kitap dosyasý aynen yeni dosyaya yazýlýr.
                            {
                                kitapyaz << kitapisbn << " " << kitapisim << " " << yazaradý << " " << yazarsoyadý << " " << kitapkonu << " " << kitaptür << " " << sayfasayýsý << endl;
                            }
                        }
                        kitapyaz.close();
                        kitap.close();
                        remove("kitaplar.txt");
                        rename("kitaplar.tmp", "kitaplar.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                    if (seçim == 9)//Kitap kaydý güncellenmek istendiðinde çalýþtýrýlýr.
                    {
                        long long arananisbn;
                        cout << "Guncellenecek kitap isbn:"; cin >> arananisbn;
                        system("cls");
                        ifstream kitap("kitaplar.txt");
                        ofstream kitapyaz("kitaplar.tmp");
                        while (true)//Ýþlem doðru olduðu sürece döngü devam eder.
                        {
                            kitap >> kitapisbn >> kitapisim >> yazaradý >> yazarsoyadý >> kitapkonu >> kitaptür >> sayfasayýsý;
                            if (kitap.eof())break;//Kitap dosyasýndaki tüm deðerler okutuluyor mu kontrol eder.
                            else if (arananisbn == kitapisbn)//Aranan isbn ile kitap isbn eþleþiyorsa kayýtlý dosya ekrana çýkartýlýr ve yeni deðerler istenerek yeni dosyaya kaydedilir.
                            {
                                cout << "Kayitli dosya" << endl;
                                cout << kitapisbn << endl << kitapisim << endl << yazaradý << endl << yazarsoyadý << endl << kitapkonu << endl << kitaptür << endl << sayfasayýsý << endl << endl;
                                cout << "ISBN:"; cin >> kitapisbn;
                                cout << "Kitap ismi:"; cin >> kitapisim;
                                cout << "Yazar adi:"; cin >> yazaradý;
                                cout << "Yazar soyadi:"; cin >> yazarsoyadý;
                                cout << "Konu:"; cin >> kitapkonu;
                                cout << "Tur:"; cin >> kitaptür;
                                cout << "Sayfa sayisi:"; cin >> sayfasayýsý;
                                kitapyaz << kitapisbn << " " << kitapisim << " " << yazaradý << " " << yazarsoyadý << " " << kitapkonu << " " << kitaptür << " " << sayfasayýsý << endl;
                                cout << "Guncelleme Basarili" << endl;
                            }
                            else if (arananisbn != kitapisbn)//Aranan isbn ile kitap isbn eþleþmiyorsa eski kitap dosyasýndaki deðerler aynen yeni dosyaya kaydedilir.
                            {
                                kitapyaz << kitapisbn << " " << kitapisim << " " << yazaradý << " " << yazarsoyadý << " " << kitapkonu << " " << kitaptür << " " << sayfasayýsý << endl;
                            }
                        }
                        kitapyaz.close();
                        kitap.close();
                        remove("kitaplar.txt");
                        rename("kitaplar.tmp", "kitaplar.txt");
                        cout << "Menuye donmek istiyor musunuz?(e/h)" << endl;
                        cin >> menücevap;
                        system("cls");
                    }
                } while (!(menücevap == 'h'));//Cevap hayýr olursa program sonlanýr,evet olursa menüye geri döner.
                {
                    //Çýkýþ tarihini ve saatini tutar.
                    auto start = chrono::system_clock::now();
                    auto simdi = chrono::system_clock::to_time_t(start);
                    char çýkýþsaat[30];
                    ctime_s(çýkýþsaat, sizeof(çýkýþsaat), &simdi);
                    cout << "Cikis Saatiniz:" << çýkýþsaat << endl;
                    exit(1);
                }
            }
        }
        break;
    }
    cin.get();
}