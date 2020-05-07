import java.util.Scanner;
class prac2_2
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int len;
		String s1;
		System.out.println(" Enter String: ");
		s1 = scan.nextLine();
		len=s1.length();
		System.out.println(" String Length : "+len);
		len=len/2;
		System.out.println(" Second Half of Entered String: ")	;
		System.out.println(s1.substring(len))	;
	}
}