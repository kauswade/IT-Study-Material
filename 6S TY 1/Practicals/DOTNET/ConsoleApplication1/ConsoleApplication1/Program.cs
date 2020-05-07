using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[5];
            for (int i = 0; i < 5; i++)
                arr[i] = Convert.ToInt32(Console.ReadLine());
            foreach (int k in arr)
                Console.WriteLine(k);
            Console.ReadKey();
        }
    }
}
