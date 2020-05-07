import java.util.Scanner;
class prac4_1
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		boolean x = true;
		int len, len1;
		char a, b, temp;
		String s1;
		System.out.println(" Enter String: ");
		s1 = scan.nextLine();
		len = s1.length();
		len1 = len / 2;
		for(int i = 0; i < len1; i++)
		{
			a = s1.charAt(i);
			b = s1.charAt(len - i - 1);
			if(a != b)
				x = false;
		}
		System.out.println(" String is palindrome : " + x);
	}
}