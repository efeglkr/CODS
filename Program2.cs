using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {

            #region  Değişkenler Double


            Console.WriteLine("***** Fiyat Listesi *****");
            Console.WriteLine();

            double pat, nar, dom, erik;
            pat = 14.44;
            nar = 88.57;
            dom = 77.55;
            erik = 56.44;
            Console.WriteLine("------- patates birim fiyatı:" + pat + " TL");
            Console.WriteLine("------- domates birim fiyatı:" + dom + " TL");
            Console.WriteLine("------- nar birim fiyatı:" + nar + " TL");
            Console.WriteLine("------- erik birim fiyatı:" + erik + " TL");

            double patgram, nargram, erikgram, domgram;

            patgram = 1.244;
            nargram = 1.345;
            erikgram = 4.565;
            domgram = 6.454;

            double toppat, toperik, topdom, topnar;
            toppat = patgram * pat;
            topnar = nar * nargram;
            toperik = erik * erikgram;
            topdom = domgram * dom;

            Console.WriteLine(" ");
            Console.WriteLine("-------------------------Fiş------------------------");
            Console.WriteLine();
            Console.WriteLine("erik=" + toperik + "TL");
            Console.WriteLine("domates=" + topdom + "TL");
            Console.WriteLine("nar=" + topnar + "TL");
            Console.WriteLine("patates=" + toppat + "TL");
            double top;
            top = toperik + topnar + toppat + topdom;
            Console.WriteLine("Ödenecek toplam tutar=" + top + " TL");


            #endregion

            #region Değişkenler Char

            char love;
            love = 'T';
            Console.WriteLine(love);


            #endregion

            #region Klavyeden Veri Girişi 

            Console.WriteLine("******** C# hava Yolları Yolcu Bilgisi ********");
            Console.WriteLine();
            string ad, soyad, il, yaş;

            Console.Write("Adı:");
            ad = Console.ReadLine();
            Console.WriteLine();
            Console.Write("Soyadı:");
            soyad = Console.ReadLine();
            Console.WriteLine();
            Console.Write("Yaşadığı İl:");
            il = Console.ReadLine();
            Console.WriteLine();
            Console.Write("Yaş:");
            yaş = Console.ReadLine();
            Console.WriteLine();

            Console.WriteLine("--------Yolcu Bilgileri---------");
            Console.WriteLine();
            Console.WriteLine("Yolcu Adı Soyadı:" + ad + soyad);
            Console.WriteLine("Yaşadığı Şehir:" + il);
            Console.WriteLine("Yaş:" + yaş);

            #endregion

            #region Dönüşümler


            int ayakkabı, tişört, şapka;

            ayakkabı = 500;
            tişört = 544;
            şapka = 400;

            int sayay, sayti, sayşap;

            Console.Write("ayakkabı sayısı:");
            sayay = int.Parse(Console.ReadLine());
            Console.WriteLine();
            Console.Write("tişört sayısı:");
            sayti = int.Parse(Console.ReadLine());
            Console.WriteLine();
            Console.WriteLine("şapka sayısı:");
            sayşap = int.Parse(Console.ReadLine());
            int toplam;
            toplam = tişört * sayti + ayakkabı * sayay + şapka * sayşap;
            Console.WriteLine("ödeyeceğiniz tutar:" + toplam + "TL");

            #endregion

            #region Klavyeden Karakter Girişleri
            char cins;
            Console.WriteLine("lütfen cinsiyet seçiniz (E && K)");
            cins = char.Parse(Console.ReadLine());

            Console.WriteLine("seçtiğiniz cinsiyet:" + cins);

            #endregion







        }
    }
}
