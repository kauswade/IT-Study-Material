//program for secan't method
#include<iostream>
#include<math.h>
using namespace std;
#define f(x) ( x*x*x-x-11 )
void ab(double *a,double *b,double x)
{	while(1)
	{   if(f(x)<0)
		{	while(f(x)<0.0)
			{	x++;
			}
			*b=x--;
			*a=x;
			break;
		}
		else
		{	while(f(x)>0.0)
			{	x++;
			}
			*b=x--;
			*a=x;
			break;
		}
	}
	cout<<"\n A="<<*a<<" B="<<*b;
}
void root(double *a,double *b,double x)
{   double k;
	for(int i=0;i<15;i++)
	{   k=x;
		x=( *b - (f(*b)*(*b-*a)/(f(*b)-f(*a)) ));
		*a=*b;
		*b=x;
		if(k==x)
			break;
		cout<<"\n X"<<i+1<<" = "<<x;
	}
}
int main()
{	double a,b,x=0.0;
	ab(&a,&b,x);
	root(&a,&b,x);
	return 0;
}
