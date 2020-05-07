#include<iostream>
using namespace std;
#define k 6
class EMPLOYEE
{       int EMPCODE;
        string EMPNAME;
    public:
        void getdata();
        void display();
};
void EMPLOYEE :: getdata()
{
    cout<<" Enter Employee Number : ";
    cin>>EMPCODE;
    cout<<" Enter Employee Name : ";
    cin>>EMPNAME;
    cout<<endl;
}
void EMPLOYEE :: display()
{
    cout<<" Employee Code : "<<EMPCODE;
    cout<<", Employee Name : "<<EMPNAME<<endl;
}
int main()
{   int i;
    EMPLOYEE emp[k];
    cout<<" Enter Employee Details\n";
    for(i=0;i<k;i++)
    {
        cout<<" Employee "<<i+1<<endl;
        emp[i].getdata();
    }
    cout<<" Employee Details : \n";
    for(i=0;i<k;i++)
    {
        emp[i].display();
    }
    return 0;
}
