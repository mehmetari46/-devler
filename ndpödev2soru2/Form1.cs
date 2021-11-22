/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2020-2021 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........:ÖDEV2_SORU2
**				ÖĞRENCİ ADI............:MEHMET ARI
**				ÖĞRENCİ NUMARASI.......:B201210086
**              DERSİN ALINDIĞI GRUP...:1. ÖĞRETİM B GRUBU
****************************************************************************/

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ndpödev2soru2
{
    public partial class Form1 : Form
    {
        string dosyayolu;
        public Form1()
        {
            InitializeComponent();
            dosyayolu = "işlemler.txt";    
        }

        private void çarpbtn_Click(object sender, EventArgs e)
        {
            //matris1, matris2, sonuçmatris adında 3 tane iki boyutlu dizi oluşturdum.
            double[,] matris1 = new double[2, 2];
            matris1[0, 0] = double.Parse(matris11.Text);
            matris1[1, 0] = double.Parse(matris12.Text);
            matris1[0, 1] = double.Parse(matris13.Text);
            matris1[1, 1] = double.Parse(matris14.Text);

            double[,] matris2 = new double[2, 2];
            matris2[0, 0] = double.Parse(matris21.Text);
            matris2[1, 0] = double.Parse(matris22.Text);
            matris2[0, 1] = double.Parse(matris23.Text);
            matris2[1, 1] = double.Parse(matris24.Text);
            //İşlemler yaptırılır.
            double[,] sonuçmatris = new double[2, 2];
            sonuçmatris[0, 0] = matris1[0, 0] * matris2[0, 0] + matris1[1, 0] * matris2[0, 1];
            sonuçmatris[1, 0] = matris1[0, 0] * matris2[1, 0] + matris1[1, 0] * matris2[1, 1];
            sonuçmatris[0, 1] = matris1[0, 1] * matris2[0, 0] + matris1[1, 1] * matris2[0, 1];
            sonuçmatris[1, 1] = matris1[0, 1] * matris2[1, 0] + matris1[1, 1] * matris2[1, 1];
            //text içerisine yazdırılır.
            sonuç1.Text = sonuçmatris[0, 0].ToString();
            sonuç2.Text = sonuçmatris[1, 0].ToString();
            sonuç3.Text = sonuçmatris[0, 1].ToString();
            sonuç4.Text = sonuçmatris[1, 1].ToString();
            //Dosya yoksa Oluşturur.
            if (!File.Exists(dosyayolu))
            {
                File.Create(dosyayolu);

            }//Veriler dosyaya yazdırılır.
            File.WriteAllText(dosyayolu, matris11.Text + " " + matris12.Text + "\n" + matris13.Text + " " + matris14.Text + "\n" + "x" + "\n" + matris21.Text + " " + matris22.Text + "\n" + matris23.Text + " " + matris24.Text + "\n" + "=" + "\n" + sonuç1.Text + " " + sonuç2.Text + "\n" + sonuç3.Text + " " + sonuç4.Text);
        }

        private void toplambtn_Click(object sender, EventArgs e)
        {
            //matris1, matris2, sonuçmatris adında 3 tane iki boyutlu dizi oluşturdum.
            double[,] matris1 = new double[2, 2];
            matris1[0, 0] = double.Parse(matris11.Text);
            matris1[1, 0] = double.Parse(matris12.Text);
            matris1[0, 1] = double.Parse(matris13.Text);
            matris1[1, 1] = double.Parse(matris14.Text);

            double[,] matris2 = new double[2, 2];
            matris2[0, 0] = double.Parse(matris21.Text);
            matris2[1, 0] = double.Parse(matris22.Text);
            matris2[0, 1] = double.Parse(matris23.Text);
            matris2[1, 1] = double.Parse(matris24.Text);
            //İşlemler yaptırılır.
            double[,] sonuçmatris = new double[2, 2];
            sonuçmatris[0, 0] = matris1[0, 0] + matris2[0, 0];
            sonuçmatris[1, 0] = matris1[1, 0] + matris2[1, 0];
            sonuçmatris[0, 1] = matris1[0, 1] + matris2[0, 1];
            sonuçmatris[1, 1] = matris1[1, 1] + matris2[1, 1];
            //text içerisine yazdırılır.
            sonuç1.Text = sonuçmatris[0, 0].ToString();
            sonuç2.Text = sonuçmatris[1, 0].ToString();
            sonuç3.Text = sonuçmatris[0, 1].ToString();
            sonuç4.Text = sonuçmatris[1, 1].ToString();
            //Dosya yoksa Oluşturur.
            if (!File.Exists(dosyayolu))
            {
                File.Create(dosyayolu);

            }//Veriler dosyaya yazdırılır.
            File.WriteAllText(dosyayolu, matris11.Text + " " + matris12.Text + "\n" + matris13.Text + " " + matris14.Text + "\n" + "+" + "\n" + matris21.Text + " " + matris22.Text + "\n" + matris23.Text + " " + matris24.Text + "\n" + "=" + "\n" + sonuç1.Text + " " + sonuç2.Text + "\n" + sonuç3.Text + " " + sonuç4.Text);
        }

        private void tersibtn_Click(object sender, EventArgs e)
        {
            //matris1 ve sonuçmatris adında 2 tane iki boyutlu dizi oluşturdum.
            double[,] matris1 = new double[2, 2];
            matris1[0, 0] = double.Parse(matris11.Text);
            matris1[1, 0] = double.Parse(matris12.Text);
            matris1[0, 1] = double.Parse(matris13.Text);
            matris1[1, 1] = double.Parse(matris14.Text);

            double determinant = matris1[0, 0] * matris1[1, 1] - matris1[1, 0] * matris1[0, 1];
            //İşlemler yaptırılır.
            double[,] sonuçmatris = new double[2, 2];
            sonuçmatris[0, 0] = (1 / determinant) * matris1[1, 1];
            sonuçmatris[1, 0] = (1 / determinant) * -(matris1[1, 0]);
            sonuçmatris[0, 1] = (1 / determinant) * -(matris1[0, 1]);
            sonuçmatris[1, 1] = (1 / determinant) * matris1[0, 0];
            //text içerisine yazdırılır.
            sonuç1.Text = sonuçmatris[0, 0].ToString();
            sonuç2.Text = sonuçmatris[1, 0].ToString();
            sonuç3.Text = sonuçmatris[0, 1].ToString();
            sonuç4.Text = sonuçmatris[1, 1].ToString();
            //Dosya yoksa Oluşturur.
            if (!File.Exists(dosyayolu))
            {
                File.Create(dosyayolu);

            }//Veriler dosyaya yazdırılır.
            File.WriteAllText(dosyayolu, "1/" + determinant + "\n" + " x " + "\n" + matris11.Text + " " + matris12.Text + "\n" + matris13.Text + " " + matris14.Text + "\n" + "=" + "\n" + sonuç1.Text + " " + sonuç2.Text + "\n" + sonuç3.Text + " " + sonuç4.Text);
        }

        private void transpozbtn_Click(object sender, EventArgs e)
        {
            //matris1 ve sonuçmatris adında 2 tane iki boyutlu dizi oluşturdum.
            double[,] matris1 = new double[2, 2];
            matris1[0, 0] = double.Parse(matris11.Text);
            matris1[1, 0] = double.Parse(matris12.Text);
            matris1[0, 1] = double.Parse(matris13.Text);
            matris1[1, 1] = double.Parse(matris14.Text);
            //text içerisine yazdırılır.
            sonuç1.Text = matris1[0, 0].ToString();
            sonuç2.Text = matris1[0, 1].ToString();
            sonuç3.Text = matris1[1, 0].ToString();
            sonuç4.Text = matris1[1, 1].ToString();
            //Dosya yoksa Oluşturur.
            if (!File.Exists(dosyayolu))
            {
                File.Create(dosyayolu);

            }//Veriler dosyaya yazdırılır.
            File.WriteAllText(dosyayolu, matris11.Text + " " + matris12.Text + "\n" + matris13.Text + " " + matris14.Text + "\n" + "MATRİSİN TRANZPOZU" + "\n" + sonuç1.Text + " " + sonuç2.Text + "\n" + sonuç3.Text + " " + sonuç4.Text);
        }

        private void izbtn_Click(object sender, EventArgs e)
        {
            //matris1 adında iki boyutlu dizi oluşturdum.
            double[,] matris1 = new double[2, 2];
            matris1[0, 0] = double.Parse(matris11.Text);
            matris1[1, 0] = double.Parse(matris12.Text);
            matris1[0, 1] = double.Parse(matris13.Text);
            matris1[1, 1] = double.Parse(matris14.Text);
            //İşlemler yapılır ve text içerisine yazılır.
            sonuç5.Text = (matris1[0, 0] + matris1[1, 1]).ToString();

            //Dosya yoksa oluşturur.
            if (!File.Exists(dosyayolu))
            {
                File.Create(dosyayolu);

            }//Veriler dosyaya yazdırılır.
            File.WriteAllText(dosyayolu, matris11.Text + " + " + matris14.Text + " = " + sonuç5.Text);
        }

        private void görüntübtn_Click(object sender, EventArgs e)
        {
            dosyayolu = "işlemler.txt";
            //Dosya okuma modunda açılır.
            FileStream fileStream = new FileStream(dosyayolu, FileMode.OpenOrCreate, FileAccess.Read);
            using (StreamReader reader = new StreamReader(fileStream))
            {
                while (true)//Dosyanın içindeki veriler okutulur ve richtexbox1 içerisine yazılır.
                {
                    string satir = reader.ReadLine();
                    richTextBox1.Text += satir + "\n";
                    if (satir == null) //Eğer dosya içinde boş bir satıra gelinirse döngüden çıkılır.
                        break;
                }
                reader.Close();
            }
            fileStream.Close();
        }
    } 
}