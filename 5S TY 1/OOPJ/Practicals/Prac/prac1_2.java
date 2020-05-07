import java.util.*;
class marks
{
	int sub[]=new int[6];
	int getperc()
	{
		int perc=0;
		for(int i=0;i<6;i++)
			perc+=sub[i];
		return(perc/6);
	}
}
class prac1_2
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		marks m= new marks();
		System.out.println(" Enter Marks in all 6 Subjects");
		for(int i=0;i<6;i++)	
		{
			m.sub[i]=scan.nextInt();
		}
		System.out.println(" Percentage : "+m.getperc());
	}
}