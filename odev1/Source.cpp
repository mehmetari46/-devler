/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI....:2
**				ÖÐRENCÝ ADI......:MEHMET ARI
**				ÖÐRENCÝ NUMARASI.:b201210086
**				DERS GRUBU.......:1.ÖÐRETÝM A GRUBU
****************************************************************************/

#include<iostream>
#include<Windows.h>

using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int genislik, yukseklik, catiyukseklik, x, y;
class kat
{
public:
	void katyapým()
	{
		cout << "genislik:";
		cin >> genislik;
		cout << "yukseklik:";
		cin >> yukseklik;
		cout << "catiyukseklik:";
		cin >> catiyukseklik;
		cout << "x:";
		cin >> x;
		cout << "y:";
		cin >> y;
		//Yukarýdaki giriþ birimlerini yazdýktan sonra ekrandan silinmesini saðlar.(0,0) noktasýnda çizimi yazýnýn üzerine yazmamasý için.
		system("cls");
		//Katýn üst tarafýndaki duvarý yapar.
		for (int i = 0; i < genislik; i++)
		{
			gotoxy(x + i, y + catiyukseklik);
			cout << char(219);
		}
		//Katýn sað tarafýndaki duvarý yapar.
		for (int i = 0; i < yukseklik; i++)
		{
			gotoxy(x, y + i + catiyukseklik);
			cout << char(219);
		}
		//Katýn alt tarafýndaki duvarý yapar.
		for (int i = 0; i < genislik; i++)
		{
			gotoxy(x + i, y + yukseklik + catiyukseklik);
			cout << char(219);
		}
		//Katýn sol tarafýndaki duvarý yapar.
		for (int i = 0; i < yukseklik+1; i++)
		{
			gotoxy(x + genislik, y + i + catiyukseklik);
			cout << char(219);
		}
	}
};
class çatý
{
public:
	void çatýyapým()
	{
		//Çatý yüksekliði kadar üst üste çatý katlarýný yapar.
		for (int a = 0; a < catiyukseklik; a++)
		{
			gotoxy(x + a, y - a + catiyukseklik - 1);
			//Çatýnýn bir katýndaki yýldýzlarý yazar ve her üst kata çýkýþýnda yýldýzlarý 2 azaltýr.
				for (int i = 0; i < genislik + 1 - 2*a; i++)
				{
					cout << char(42);
				}
		}
	}
};
class kapý
{
public:
	void kapýyapým()
	{
		//Kapý katlarýný ev yüksekliðinin yarýsýna kadar üst üste çýkartýr.
		for (int a = 0; a < yukseklik / 2; a++)
		{
			gotoxy(x + genislik / 2, y + catiyukseklik + yukseklik - a);
			//Kapýnýn bir katýný, ev sýnýrlarýný geçmeden ekrana çýkartýr.
			for (int i = 0; i < genislik / 4; i++)
			{
				cout << "#";
			}
		}
	}
};
class ev
{
public:
	void evyapým()
	{
		kat kat1;
		kat1.katyapým();
		çatý çatý1;
		çatý1.çatýyapým();
		kapý kapý1;
		kapý1.kapýyapým();
		gotoxy(0, y + catiyukseklik + yukseklik);
		cin.get();
	}
};
int main()
{
	ev ev1;
	ev1.evyapým();
	cin.get();
	return 0;
}