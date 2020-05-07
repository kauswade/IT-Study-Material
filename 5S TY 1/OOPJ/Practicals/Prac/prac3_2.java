import java.util.Scanner;
class prac3_2
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int count = 0, len, j;
		char ch;
		String s1;
		System.out.println(" Enter String: ");
		s1 = scan.nextLine();
		len = s1.length();
		for(int i = 0 ; i < len; i++)
		{
			j = 0;
			ch = s1.charAt(i);
			if(ch >= 65 && ch <= 90)
			{
				if(ch == ' ' || ch == '\0')
				{
					count++;
				}
				count++;
			}
		}
		System.out.println(" No. of Words: " + count);
	}
}