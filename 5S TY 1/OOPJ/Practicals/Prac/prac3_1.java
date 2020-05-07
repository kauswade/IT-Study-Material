import java.util.Scanner;
class prac3_1
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		String s1;
		char ch;
		int vow = 0, conso = 0, len;
		System.out.println(" Enter String : ");
		s1 = scan.nextLine();
		len = s1.length();
		for(int i=0; i<len; i++)	
		{
			ch=s1.charAt(i);
			if(ch==' ')	
				continue;
			if(ch>=65&&ch<=90 || ch>=97&&ch<=122)
			{
				if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
				vow++;
			else
				conso++;
			}
		}
		System.out.println(" Vowels : " + vow + ", Consonants : " + conso);
	}
}