import java.util.Scanner;
abstract class shape
{
	float a, b;
	abstract void area();
}
class rectangle extends shape
{
	rectangle(int x, int y)
	{
		a = x;
		b = y;
	}
	void area()
	{
		System.out.println(" Area of Rectangle : " + a*b );
	}
}
class triangle extends shape
{
	triangle(int x, int y)
	{
		a = x;
		b = y;
	}
	void area()
	{
		System.out.println(" Area of Triangle : " + (a*b)/2 );
	}
}
class prac6
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		int a, b;
		System.out.println(" Enter Height and Base : ");
		a = scan.nextInt();
		b = scan.nextInt();
		rectangle r = new rectangle(a, b);
		triangle t = new triangle(a, b);
		r.area();
		t.area();
	}
}