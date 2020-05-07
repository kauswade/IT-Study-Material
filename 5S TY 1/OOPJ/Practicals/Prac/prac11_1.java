import java.io.*;  
class Student
{  
	public static void main(String args[])
	{  
		try
		{ 
			int c;
			FileInputStream fin=new FileInputStream("kaus.txt"); 
			FileOutputStream fout=new FileOutputStream("kaus.txt");  
			String s="Name:Kaustubh Wade";  
			byte b[]=s.getBytes(); 
			fout.write(b);  
			fout.close();  
			c=0;  
			while((c=fin.read())!=-1)
			{
				System.out.print((char)c);  
			}
			fin.close();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}  
	}
} 
