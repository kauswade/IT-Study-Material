class myThread implements Runnable
{
	Thread t;
	String s;
	myThread(String s)
	{
		this.s=s;
	    	Thread t=new Thread(this,"my Thread");
	        t.start();
	}
	public void run()
	{
	 	if(s.equals("odd"))
	        	for(int  i=1;i<20;i++)
	            	{
	                	if(i%2!=0)
	                		System.out.println("odd :" +i);
	            	}
	        else
		{
	        	for( int i=1;i<20;i++)
	            	{
	                	if(i%2==0)
	                		System.out.println("even :"+i);
	            	}
		}
	}
}
class Thread_20
{
	public static void main(String[] args)
	{
        	// TODO code application logic here
	        myThread obj1=new myThread("odd");
	        myThread obj2=new myThread("even");
    	}
}
