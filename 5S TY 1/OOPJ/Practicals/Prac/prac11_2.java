import java.io.*;
class StudentBuffer
{
	public static void main(String[] args) throws IOException
	{
		FileWriter fw = new FileWriter("kaus.txt");
		BufferedWriter bw = new BufferedWriter(fw);
		bw.write("Name: Kaustubh Wade");
		bw.newLine();
		bw.write("Enrollment No. : 160410106050");
		bw.newLine();
		bw.close();
		FileReader fr = new FileReader("kaus.txt");
		BufferedReader br = new BufferedReader(fr);
		String s = br.readLine();
		while (s != null) 
		{
			System.out.println(s);
			s = br.readLine();
		}
		br.close();
	}
}
