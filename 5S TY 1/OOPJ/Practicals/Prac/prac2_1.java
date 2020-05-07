import java.util.*;
class prac2_1
{
	public static void main(String args[])
	{
		
	int operand1, operand2;
	Scanner scan=new Scanner(System.in);
	String ch;
	System.out.println(" Enter Two Operands:\n");
	operand1=scan.nextInt();
	operand2=scan.nextInt();
	System.out.println(" Enter Opeation to be performed:(+,-,*,/)");
	ch=scan.next();
	switch(ch)
	{
		case "+" : System.out.println(" Addition = "+ (operand1+operand2));
			break;
		case "-" : System.out.println(" Subtraction = "+ (operand1-operand2));
			break;
		case "*" : System.out.println(" Multiplication = "+ (operand1*operand2));
			break;
		case "/" : System.out.println(" Division = "+ (operand1/operand2));
			break;
		default : System.out.println(" Defalut");
	}
	
	}
}