#include"iostream"
using namespace std;
#define mx 5
void exchange(int *a, int *b);
void display(int a[mx]);
int main()
{
    int i,a[mx];
    for(i=0;i<mx;i++)
    {
        cout<<"\n Enter Element "<<i+1<<" : ";
        cin>>a[i];
    }
    for(i=0;i<mx;i++)
        for(int j=0;j<mx-1;j++)
        {
            if(a[j]>a[j+1])
                exchange(&a[j],&a[j+1]);
        }
    display(a);
}
void exchange(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void display(int a[mx])
{
    for(int i=0;i<mx;i++)
        cout<<" ,"<<a[i];
}
