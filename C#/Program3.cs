using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {

            #region İf Else Ve Karar Yapıları

            Console.WriteLine("Lütfen şifrenizi giriniz: ");

            double password;


            password=double.Parse(Console.ReadLine());
            if (password == 123456789)
            {

                Console.WriteLine("şifre doğru hoşgeldiniz");
            }

            else
            {
                Console.WriteLine("hatalı giriş");

            }

            #endregion








        }
    }
}
