import java.util.*;

class prac4_2
{
  public static void main(String[] st)
{
int v=0,aa=0,ee=0,iii=0,oo=0,uu=0;
String s1;
int ii;
char ch;
Scanner sc=new Scanner(System.in);
System.out.print("\t Enter String:  ");
s1=sc.nextLine();
while(!s1.equals("quit"))
{
  for(ii=0;ii<s1.length();ii++)
   {
      ch=s1.charAt(ii);
   if(ch=='a' || ch=='A')
    {
    aa++;
    }
    else if(ch=='e' || ch=='E')
     {
	ee++;
      }
       else if(ch=='i' || ch=='I')
        {
 	iii++;
        }
          else if(ch=='o' || ch=='O')
           {
           oo++;
            }
           else if(ch=='u' || ch=='U')
           {
             uu++;
            }
        
       }
s1=sc.nextLine();
}
System.out.println("\n A: "+aa);
System.out.println("\n E: "+ee);
System.out.println("\n I: "+iii);
System.out.println("\n O: "+oo);   
System.out.println("\n U: "+uu);

}
}
