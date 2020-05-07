#include<iostream>
using namespace std;
class TIME
{       int hh,mm,ss;
    public:
        TIME();
        TIME(int h,int m,int s);
        void atime(TIME t1, TIME t2);
        void display();
};
TIME :: TIME()
{   hh=0;
    mm=0;
    ss=0;
}
TIME :: TIME(int h,int m,int s)
{   hh=h;
    mm=m;
    ss=s;
}
void TIME :: atime(TIME t1, TIME t2)
{   int h,m,s;
    hh=t1.hh+t2.hh;
    mm=t1.mm+t2.mm;
    ss=t1.ss+t2.ss;
    mm+=ss/60;
    ss=ss%60;
    hh+=mm/60;
    mm=mm%60;
}
void TIME :: display()
{   cout<<"Time = "<<hh<<":"<<mm<<":"<<ss;  }
int main()
{   TIME t1,t2(17,50,59);
    cout<<"\n Time 1 : ";
    t1.display();
    cout<<"\n Time 2 : ";
    t2.display();
    t2.atime(t1,t2);
    cout<<"\n After addition : ";
    t2.display();
}
