class myCustom extends Exception
{
	myCustom()
	{
        	System.out.println("custom exception caught");
    	}
}
class MyCustomclass
{
	public static void main(String[] args)
	{
		try
		{
			if(Integer.parseInt(args[0])<0)
		        {
           			throw new myCustom();
         		}
		}
		catch (myCustom ex)
		{
                	System.out.println("exception caught");
            	}
        }
}
