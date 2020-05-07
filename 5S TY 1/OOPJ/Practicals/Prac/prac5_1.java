import java.util.Scanner;
class prac5_1
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int len;
		String s1;
		System.out.println(" Enter Word : ");
		s1 = scan.nextLine();
		len = s1.length();
		for(int i=0;i<len;i++)
		{
			for(int j=len-1-i;j>0;j--)
				System.out.print(" ");
			for(int j=0;j<=i;j++)
				System.out.print(s1.charAt(j) + " ");
			System.out.println("\n");
		}
	}
}