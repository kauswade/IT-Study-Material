#include<iostream>
using namespace std;
class COMPLEX
{       int r,i;
    public:
        COMPLEX(){}
        COMPLEX(int a,int b);
        friend COMPLEX func(COMPLEX c1,COMPLEX c2);
        void display();
};
COMPLEX :: COMPLEX(int a,int b)
{   r=a;
    i=b;
}
COMPLEX func(COMPLEX c1,COMPLEX c2)
{   COMPLEX c;
    c.r=c1.r+c2.r;
    c.i=c1.i+c2.i;
    return c;
}
void COMPLEX :: display()
{
    cout<<" Number :";
    cout<<r;
    if(i>0)
        cout<<"+";
    cout<<i<<"i";

}
int main()
{   COMPLEX c1(3,4),c2(6,-9),c3;
    cout<<"\n Number 1 : ";
    c1.display();
    cout<<"\n Number 2 : ";
    c2.display();
    cout<<"\n Addition of two numbers : ";
    c3=func(c1,c2);
    c3.display();
    return 0;
}
