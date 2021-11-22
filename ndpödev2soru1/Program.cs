/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2020-2021 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........:ÖDEV2_SORU1
**				ÖĞRENCİ ADI............:MEHMET ARI
**				ÖĞRENCİ NUMARASI.......:B201210086
**              DERSİN ALINDIĞI GRUP...:1. ÖĞRETİM B GRUBU
****************************************************************************/

using System;

namespace ndpödev2soru1
{
    class BenimString
    {
        public void ElemanSayısı()
        {
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            int elemansayısı=0;
            foreach (char index in metin)//Foreach ile metnin içeriği dönüyor ve her karakter görmesinde eleman sayısını arttırıyor.
                elemansayısı++;
            Console.WriteLine(elemansayısı);
        }
        public void Birleştir()
        {
            Console.WriteLine();
            Console.WriteLine("İlk metni giriniz.");
            string metin = Console.ReadLine();
            Console.WriteLine("İkinci metni giriniz.");
            string metin1 = Console.ReadLine();
            Console.WriteLine(metin + " " + metin1);
        }
        public void ArayaGir()
        {
            Console.WriteLine();
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            char[] dizi = new char[metin.Length];
            for (int i = 0; i < metin.Length; i++)//Metnin karakterlerini bir char diziye yazıyor.
            {
                dizi[i] = metin[i];
            }
            Console.WriteLine("Kaçıncı indiste araya girileceğini belirleyiniz.");
            int indis = int.Parse(Console.ReadLine());
            for (int i = 0; i < indis; i++)//Girilen indise kadar dizideki karakterleri yazdırıyor.
            {
                Console.Write(dizi[i]);
            }
            Console.Write("-");
            for (int j = indis; j < metin.Length; j++) //Girilen indisden sonraki karakterleri yazıyor.
            {
                Console.Write(dizi[j]);
            }
            Console.WriteLine();
        }
        public void DeğerAl()
        {
            Console.WriteLine();
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            char[] dizi = new char[metin.Length];
            for (int i = 0; i < metin.Length; i++)//Metnin karakterlerini char diziye yazıyor.
            {
                dizi[i] = metin[i];
            }
            Console.WriteLine("Kaçıncı indiste araya girileceğini belirleyiniz.");
            int indis = int.Parse(Console.ReadLine());
            Console.WriteLine("Kaç karakter alınacağını belirleyiniz.");
            int krktrsayı = int.Parse(Console.ReadLine());
            for (int j = indis; j < indis + krktrsayı; j++)//Girilen indisten itibaren karakter sayısı kadar yazdırır.
            {
                Console.Write(dizi[j]);
            }
            Console.WriteLine();
        }
        public void DiziyeAyır()
        {
            Console.WriteLine();
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            Console.WriteLine("Metni ayıracak karakteri belirleyiniz.");
            char karakter = char.Parse(Console.ReadLine());
            for (int i = 0; i < metin.Length; i++)//Bütün karakterleri döndürür.
            {
                if (metin[i] != karakter)//Metnin içinde karakteri görmezse karakteri aynen yazdırır.
                {
                    Console.Write(metin[i]);
                }
                else //Metnin içinde karakteri görürse boşluk bırakarak ayırır.
                {
                    Console.Write(" ");
                }
            }
            Console.WriteLine();
        }
        public void CharDiziyeDönüştür()
        {
            Console.WriteLine();
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            char[] dizi = new char[metin.Length];
            for (int i = 0; i < metin.Length; i++)//Metnin karakterlerini char diziye yazıyor.
            {
                dizi[i] = metin[i];
            }
            Console.WriteLine("Metnin char dizisine dönüşmüş hali;");
            for (int i = 0; i < metin.Length; i++)//Dizinin karakterlerini araya virgül koyarak yazdırır.
            {
                Console.Write(dizi[i] + ",");
            }
            Console.WriteLine();
        }
        public void Degerİndis()
        {
            Console.WriteLine();
            string metin;
            string kelime;
            Console.WriteLine("Lütfen metni giriniz.");
            metin = Console.ReadLine();
            Console.WriteLine("Lütfen aranacak kelimeyi giriniz.");
            kelime = Console.ReadLine();
            if (metin.IndexOf(kelime) >= 0)//Kelime metnin içerisinde varsa hangi konumda bulduğunu yazdırır.
            {
                Console.WriteLine("İndis: " + metin.IndexOf(kelime));
            }
        }
        public void SıralaAZ()
        {
            Console.WriteLine();
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            char[] dizi = new char[metin.Length];
            for (int i = 0; i < metin.Length; i++)//Metnin karakterlerini char diziye yazıyor.
            {
                dizi[i] = metin[i];
            }
            Array.Sort(dizi);//Diziyi alfabetik sıralar.
            Console.WriteLine("Harfler A-Z sıralanmış şekilde;");
            for (int i = 0; i < metin.Length; i++)//Sıralanmış diziyi ekrana çıkartır.
            {
                Console.Write(dizi[i]+",");
            }
            Console.WriteLine();
        }
        public void SıralaZA()
        {
            Console.WriteLine();
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            char[] dizi = new char[metin.Length];
            for (int i = 0; i < metin.Length; i++)//Metnin karakterlerini char diziye yazıyor.
            {
                dizi[i] = metin[i];
            }
            Array.Sort(dizi);
            Console.WriteLine("Harfler Z-A sıralanmış şekilde;");
            for (int i = metin.Length-1; i >= 0; i--)//a dan z ye sıralanmış diziyi sondan başa başlayarak yazdırır.
            {
                Console.Write(dizi[i] + ",");
            }
            Console.WriteLine();
        }
        public void TersCevir()
        {
            Console.WriteLine();
            Console.WriteLine("Lütfen metni giriniz.");
            string metin = Console.ReadLine();
            char[] dizi = new char[metin.Length];
            for (int i = 0; i < metin.Length; i++)//Metnin karakterlerini char diziye yazıyor.
            {
                dizi[i] = metin[i];
            }
            Console.WriteLine("Metnin ters çevrilmiş hali;");
            for (int i = metin.Length - 1; i >= 0; i--)//Metni olduğu gibi ters çevirir.
            {
                Console.Write(dizi[i]);
            }
            Console.WriteLine();
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            BenimString A = new BenimString();
            A.ElemanSayısı();
            A.Birleştir();
            A.ArayaGir();
            A.DeğerAl();
            A.DiziyeAyır();
            A.CharDiziyeDönüştür();
            A.Degerİndis();
            A.SıralaAZ();
            A.SıralaZA();
            A.TersCevir();
            Console.ReadKey();
        }
    }
}
