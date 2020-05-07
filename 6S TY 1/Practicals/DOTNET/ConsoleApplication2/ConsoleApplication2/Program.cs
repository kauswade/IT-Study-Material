using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int [][]arr = new int[][]{ new int[3], new int[]{5,6,7}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    arr[i][j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            for (i=0; i<2; i++)
            {
                for(j=0; j<3; j++)
                {
                    Console.Write(arr[i][j]+" ");
                }
                Console.Write("\n");
            }
                Console.ReadKey();
        }
    }
}
