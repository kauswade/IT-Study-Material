#include<iostream>
#include<math.h>
using namespace std;
int power(int m,int n)
{
    return(pow(m,n));
}
double power(double m,int n)
{
    return(pow(m,n));
}
int main()
{
    double x;
    int y;
    cout<<" Enter Base Number : ";
    cin>>x;
    cout<<" Enter Power : ";
    cin>>y;
    cout<<" Result using First Condition = "<<power(x,y);
    cout<<"\n Result using Second Condition = "<<power((int)x,y);
    return 0;
}
