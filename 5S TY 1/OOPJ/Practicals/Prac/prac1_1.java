class prac1_1
{
	public static void main(String args[])
	{
		money m = new money();
		int a = Integer.parseInt(args[0]);
		m.getdollar(a);
		System.out.println(" Converted Dollars : "+ (m.putdollar()/60));
	}
}