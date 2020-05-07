import java.io.*;
class StudentDATA 
{
	public static void main(String[] args) 
	{
		String name = "Kaustubh Wade";
		try 
		{
			FileOutputStream fo1 = new FileOutputStream("kaus.txt");
			DataOutputStream do1 = new DataOutputStream(fo1);
			do1.writeUTF(name);
			do1.close();
			FileInputStream fi1 = new FileInputStream("kaus.txt");
			DataInputStream di1 = new DataInputStream(fi1);
			String name1 = di1.readUTF();
			System.out.println("Name: " + name1);
		}
		catch (Exception e) 
		{
			System.out.println(e);
		}
	}
}
