//program for newton rapson method
#include<iostream>
using namespace std;
#define f(x) (x*x*x+x-1)
#define g(x) (3*x*x+1)
int a=0,b=0;
float x0,xn;
void interval();
void check();
int main()
{   interval();
    cout<<" A = "<<a<<"\t B = "<<b<<endl;
    check();
    return 0;
}
void interval()
{   if(f(a)<0.0)
    {   while(f(a)<0.0)
            a++;
        b=a--;
    }
    else
    {   while(f(a)>0.0)
            a++;
        b=a--;
    }
}
void check()
{   int i=0;
    x0=(float)(a+b)/2;
    while(i<30)
    {   xn=x0-(f(x0)/g(x0));
        cout<<" Step "<<++i<<"\t Root = "<<xn<<endl;
        if(xn==x0)
            break;
        x0=xn;
    }
}
