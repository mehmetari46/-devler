/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2020-2021 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........:1_SORU1
**				ÖĞRENCİ ADI............:MEHMET ARI
**				ÖĞRENCİ NUMARASI.......:b201210086
**              DERSİN ALINDIĞI GRUP...:1.ÖĞRETİM A GRUBU
****************************************************************************/

using System;

namespace ndpödev1soru1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.SetCursorPosition(20, 10);
            for (int i = 0; i < 10; i++) //Alan belirli olması için matrisin üst çizgisini çizer.
            {
                Console.Write("#");
            }
            for (int i = 0; i < 9; i++) //Alan belirli olması için matrisin sol çizgisini çizer.
            {
                Console.SetCursorPosition(20, 10 + i);
                Console.Write("#");
            }
            for (int i = 0; i < 10; i++) //Alan belirli olması için matrisin alt çizgisini çizer.
            {
                Console.SetCursorPosition(20+i, 19);
                Console.Write("#");
            }
            for (int i = 0; i < 10; i++) //Alan belirli olması için matrisin sağ çizgisini çizer.
            {
                Console.SetCursorPosition(29, 10+i);
                Console.Write("#");
            }
            Console.ForegroundColor = ConsoleColor.White;
            Console.SetCursorPosition(21, 9);
            Console.Write("ABCDEFGH");
            for (int i = 1; i < 9; i++) //Matrisin solundaki sıra sayılarını yazdırır.
            {
                    Console.SetCursorPosition(18, 10 + i);
                    Console.Write(i);
            }
            Console.ForegroundColor = ConsoleColor.Blue;
            for (int i = 0; i < 8; i++) //Kale olmayan yerlere 0 yazdırması için döngü oluşturdum.(x ekseni)
            { 
                for (int j = 0; j < 8; j++) //Kale olmayan yerlere 0 yazdırması için döngü oluşturdum.(y ekseni)
                {
                    Console.SetCursorPosition(21 + i, 11+j);
                    Console.Write("0");
                }
            }
            Console.ForegroundColor = ConsoleColor.Green;
            int sayi, sayi1, sayi2, sayi3, sayi4, sayi5, sayi6, sayi7;
            Random rnd = new Random();
            sayi = rnd.Next(1, 9);
            Console.SetCursorPosition(21, 10 + sayi);
            Console.Write("K");
            do
            {
                Random rnd1 = new Random();
                sayi1 = rnd1.Next(1, 9);
                Console.SetCursorPosition(22, 10 + sayi1);
            } while (sayi1 == sayi); //Aynı hizada olmaması için sayı1 ile sayı kıyaslanıyor.
            Console.Write("K");
            do
            {
                Random rnd2 = new Random();
                sayi2 = rnd2.Next(1, 9);
                Console.SetCursorPosition(23, 10 + sayi2);
            } while (sayi2 == sayi || sayi2 == sayi1); //Aynı hizada olmaması için sayı2 ile diğer sayılar kıyaslanıyor.
            Console.Write("K");
            do
            {
                Random rnd3 = new Random();
                sayi3 = rnd3.Next(1, 9);
                Console.SetCursorPosition(24, 10 + sayi3);
            } while (sayi3 == sayi2 || sayi3 == sayi1 || sayi3 == sayi); //Aynı hizada olmaması için sayı3 ile diğer sayılar kıyaslanıyor.
            Console.Write("K");
            do
            {
                Random rnd4 = new Random();
                sayi4 = rnd4.Next(1, 9);
                Console.SetCursorPosition(25, 10 + sayi4);
            } while (sayi4 == sayi3 || sayi4 == sayi2 || sayi4 == sayi1 || sayi4 == sayi);
            //Aynı hizada olmaması için sayı4 ile diğer sayılar kıyaslanıyor.
            Console.Write("K");
            do
            {
                Random rnd5 = new Random();
                sayi5 = rnd5.Next(1, 9);
                Console.SetCursorPosition(26, 10 + sayi5);
            } while (sayi5 == sayi4 || sayi5 == sayi3 || sayi5 == sayi2 || sayi5 == sayi1 || sayi5 == sayi);
            //Aynı hizada olmaması için sayı5 ile diğer sayılar kıyaslanıyor.
            Console.Write("K");
            do
            {
                Random rnd6 = new Random();
                sayi6 = rnd6.Next(1, 9);
                Console.SetCursorPosition(27, 10 + sayi6);
            } while (sayi6 == sayi5 || sayi6 == sayi4 || sayi6 == sayi3 || sayi6 == sayi2 || sayi6 == sayi1 || sayi6 == sayi);
            //Aynı hizada olmaması için sayı6 ile diğer sayılar kıyaslanıyor.
            Console.Write("K");
            do
            {
                Random rnd7 = new Random();
                sayi7 = rnd7.Next(1, 9);
                Console.SetCursorPosition(28, 10 + sayi7);
            } while (sayi7 == sayi6 || sayi7 == sayi5 || sayi7 == sayi4 || sayi7 == sayi3 || sayi7 == sayi2 || sayi7 == sayi1 || sayi7 == sayi);
            //Aynı hizada olmaması için sayı7 ile diğer sayılar kıyaslanıyor.
            Console.Write("K");
            Console.SetCursorPosition(0, 25);
            Console.ReadKey();
        }
    }
}