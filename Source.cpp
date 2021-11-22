/****************************************************************************
**					SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI....:2
**				��RENC� ADI......:MEHMET ARI
**				��RENC� NUMARASI.:b201210086
**				DERS GRUBU.......:1.��RET�M A GRUBU
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
	void katyap�m()
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
		//Yukar�daki giri� birimlerini yazd�ktan sonra ekrandan silinmesini sa�lar.(0,0) noktas�nda �izimi yaz�n�n �zerine yazmamas� i�in.
		system("cls");
		//Kat�n �st taraf�ndaki duvar� yapar.
		for (int i = 0; i < genislik; i++)
		{
			gotoxy(x + i, y + catiyukseklik);
			cout << char(219);
		}
		//Kat�n sa� taraf�ndaki duvar� yapar.
		for (int i = 0; i < yukseklik; i++)
		{
			gotoxy(x, y + i + catiyukseklik);
			cout << char(219);
		}
		//Kat�n alt taraf�ndaki duvar� yapar.
		for (int i = 0; i < genislik; i++)
		{
			gotoxy(x + i, y + yukseklik + catiyukseklik);
			cout << char(219);
		}
		//Kat�n sol taraf�ndaki duvar� yapar.
		for (int i = 0; i < yukseklik+1; i++)
		{
			gotoxy(x + genislik, y + i + catiyukseklik);
			cout << char(219);
		}
	}
};
class �at�
{
public:
	void �at�yap�m()
	{
		//�at� y�ksekli�i kadar �st �ste �at� katlar�n� yapar.
		for (int a = 0; a < catiyukseklik; a++)
		{
			gotoxy(x + a, y - a + catiyukseklik - 1);
			//�at�n�n bir kat�ndaki y�ld�zlar� yazar ve her �st kata ��k���nda y�ld�zlar� 2 azalt�r.
				for (int i = 0; i < genislik + 1 - 2*a; i++)
				{
					cout << char(42);
				}
		}
	}
};
class kap�
{
public:
	void kap�yap�m()
	{
		//Kap� katlar�n� ev y�ksekli�inin yar�s�na kadar �st �ste ��kart�r.
		for (int a = 0; a < yukseklik / 2; a++)
		{
			gotoxy(x + genislik / 2, y + catiyukseklik + yukseklik - a);
			//Kap�n�n bir kat�n�, ev s�n�rlar�n� ge�meden ekrana ��kart�r.
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
	void evyap�m()
	{
		kat kat1;
		kat1.katyap�m();
		�at� �at�1;
		�at�1.�at�yap�m();
		kap� kap�1;
		kap�1.kap�yap�m();
		gotoxy(0, y + catiyukseklik + yukseklik);
		cin.get();
	}
};
int main()
{
	ev ev1;
	ev1.evyap�m();
	cin.get();
	return 0;
}