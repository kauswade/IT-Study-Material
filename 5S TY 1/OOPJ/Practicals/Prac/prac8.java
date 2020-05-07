interface Transport
{
    void deliver();
}
abstract class Animal 
{
	String name;
	abstract void get();
}
class Camel extends Animal implements Transport
{
	void get()
	{
		System.out.println("Camel");
	}
	public void deliver()
	{
		System.out.println("Camel used for transportation...");
	}
}
class Deer extends Animal 
{
	void get()
	{
		System.out.println("Deer");
	}
}
class Donkey extends Animal implements Transport 
{
	void get()
	{
		System.out.println("Donkey");
	}
	public void deliver()
	{
		System.out.println("Donkey used for transportation...");
	}
}
class Tiger extends Animal 
{
	void get()
	{
		System.out.println("Tiger");
	}
}
class Animal_test 
{
	public static void main(String[] args)
	{
        	Animal anim[]=new Animal [4];
		Tiger i1=new Tiger();
		Deer i2=new Deer();
		Donkey i3=new Donkey();
		Camel i4=new Camel();
		anim[0]=i1;
		anim[1]=i2;
		anim[2]=i3;
		anim[3]=i4;
		for(Animal a:anim)
		{
			a.get();
			if(a instanceof Transport)			
				((Transport) a).deliver();	                     
		}        
    	}
}

