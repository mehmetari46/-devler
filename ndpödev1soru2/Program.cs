/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2020-2021 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........:ÖDEV1_SORU2
**				ÖĞRENCİ ADI............:MEHMET ARI
**				ÖĞRENCİ NUMARASI.......:B201210086
**              DERSİN ALINDIĞI GRUP...:1. ÖĞRETİM B GRUBU
****************************************************************************/

using System;

namespace ndpödev1soru2
{
    class Program
    {
        static void Main(string[] args)
        {
            char menucvp;
            do
            {            
                Console.WriteLine("1-String bir değişkende, string değeri substring kullanmadan ara.");
                Console.WriteLine("2-String bir değişkende, string değeri substring kullanarak ara.");
                Console.WriteLine("3-Alfabenin karakterlerini bir string de ara, kaç adet geçiyor bul ve çiz.");
                int secim;
                Console.Write("Seçiminiz:");
                secim = int.Parse(Console.ReadLine());
                if (secim == 1)//1. şık seçilirse çalışır ve substring kullanmadan arar.
                {
                    string metin;
                    string kelime;
                    Console.WriteLine("Lütfen metni giriniz.");
                    metin = Console.ReadLine();
                    Console.WriteLine("Lütfen aranacak kelimeyi giriniz.");
                    kelime = Console.ReadLine();
                    if (metin.IndexOf(kelime) >= 0)//İndexof 0' dan büyük olursa yani metnin içerisinde kelimeyi bulursa ekrana çıkartır.
                    {
                        Console.WriteLine("Kelime " + kelime + " indis: " + metin.IndexOf(kelime));
                    }
                    Console.ReadKey();
                }
                if (secim == 2)//2. şık seçilirse çalışır ve substring kullanarak arar.
                {
                    string metin;
                    Console.WriteLine("Lütfen metni giriniz.");
                    metin = Console.ReadLine();
                    string kelime;
                    Console.WriteLine("Lütfen aranacak kelimeyi giriniz.");
                    kelime = Console.ReadLine();
                    for (int i = 0; i <= metin.Length - (kelime.Length); i++)//Metin içerisinde 0'dan başlayarak tüm konumlarda aranan kelime var mı diye kontrol eder.
                    {
                        if (kelime == metin.Substring(i, kelime.Length))//Metin içerisinde kelimeyi bulursa ekrana yazdırır.
                        {
                            Console.WriteLine("Kelime " + kelime + " indis: " + i);               
                        }
                    }
                    Console.ReadKey();
                }
                if (secim == 3)//3. şık seçilirse çalışır ve metinde hangi harften kaç tane olduğunu gösterir.
                {
                    Console.WriteLine("Lütfen metni giriniz :");
                    Console.WriteLine("========================================");
                    String metin = Console.ReadLine();
                    metin = metin.ToUpper();
                    String harfler = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZWQX";
                    int[] harfsayı = new int[harfler.Length];//harfsayı adında bir dizi oluşturulur.
                    for (int i = 0; i < metin.Length; i++)//Tüm metni kontrol etmesi için döngü kurulur.
                    {
                        int index = harfler.IndexOf(metin[i]);
                        if (index < 0)//Eğer index sıfırdan küçükse yani harf o konumda yoksa aramaya devam eder.
                            continue;
                        else//Eğer index sıfırdan büyükse yani harf o konumda varsa o harfin sayısını 1 arttır.
                        {
                            harfsayı[index]++;
                        }
                    }
                    for (int i = 0; i < harfsayı.Length; i++)//Herbir harfin sayısı bulunduktan sonra ekrana yazdırılması için döngü oluşturulur.
                    {
                        if (harfsayı[i] < 1)//Eğer metin içerisinde harfden hiç yoksa ekrana yazdırma.
                            continue;
                        else//Eğer metin içerisinde harfden bulunduysa ekrana yazdır.
                        {
                            Console.Write(harfler[i] + ", sayısı: " + harfsayı[i]);
                            for (int j = 0; j < harfsayı[i]; j++)//Harf sayısı kadar * bastır.
                            {
                                Console.Write(" " + "*");
                            }
                            Console.WriteLine();
                        }
                    }
                    Console.ReadKey();
                }
                Console.WriteLine("Menüye dönmek istiyor musunuz?(e/h)");
                menucvp = char.Parse(Console.ReadLine());
            } while (menucvp =='e');//Cevap 'e' ise menüye geri dön,'h' ise döngüden çık.
            Console.WriteLine();
        }
    }
}
