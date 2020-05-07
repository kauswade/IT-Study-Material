//Program for Bisection method
#include<iostream>
#include<math.h>
using namespace std;
#define f(x) ((x*x*x)-x-11)
int main()
{   	long double a,b,x0,x=0.0;
	if(f(x)<0.000000)
	{	while(1)
      		{	if(f(x)>0.000000)
           		{	b=x--;
                		a=x;
                		break;
            		}
            		x++;
        	}
        	cout<<" A = "<<a<<" and B = "<<b;
       		for(int i=0;i<15;i++)
        	{	x0=((a+b)/2);
            		if(f(x0)<0.000000)
                		a=x0;
            		else
                		b=x0;
            		cout<<"\n Step = "<<i+1<<"\tRoot = "<<x0;
        	}
	}
	else
	{	while(1)
        	{	if(f(x)<0.000000)
            		{	a=x--;
                		b=x;
                		break;
            		}
            		x++;
        	}
        	cout<<" A = "<<a<<" and B = "<<b;
        	for(int i=0;i<15;i++)
        	{	x0=((a+b)/2);
            		if(f(x0)<0.000000)
                		a=x0;
            		else
                		b=x0;
            		cout<<"\n Step "<<i+1<<" Root = "<<x0;
        	}
	}
	return 0;
}
