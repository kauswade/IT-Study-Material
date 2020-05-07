import java.util.Scanner;
class prac5_2
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int x;
		System.out.println(" Enter Number : ");
		x = scan.nextInt();
		for(int i = 0; i < x; i++)
		{
			for(int k = x - 1 - i; k > 0; k--)
				System.out.print(" ");
			for(int j = 0; j <= i; j++)
				System.out.print("* ");
			System.out.println();
		}
		for(int i = 0; i < x - 1; i++)
		{
			for(int k = 1; k <= 1 + i; k++)
				System.out.print(" ");
			for(int j = x - 1 - i; j > 0; j--)
				System.out.print("* ");
			System.out.println();
		}
		
	}
}