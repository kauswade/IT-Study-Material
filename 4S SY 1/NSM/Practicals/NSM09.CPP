#include<iostream>
using namespace std;
int main()
{
	float a[5][5];
	int i,j;
	cout<<"Enter the coefficent of eqution"<<endl;
	for(i=1;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
	cout<<"Equation is:\n";
	for(i=1;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
		cout<<"\t"<<a[i][j];
		}
        cout<<endl;
	}
	cout<<"step: 1\n";
	float t1=a[1][1];
	for(i=1;i<2;i++)
	{
		for(j=1;j<5;j++)
		{
            a[i][j]=a[i][j]/t1;
		}
	}
    for(i=1;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            cout<<"\t"<<a[i][j];
		}
        cout<<endl;
	}
	cout<<"Step: 2\n";
	float t2=a[2][1];
	for(i=2;i<3;i++)
	{
		for(j=1;j<5;j++)
		{
            a[i][j]=a[i][j]-(a[1][j]*t2);
		}
	}
	float t3=a[3][1];
	for(i=3;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            a[i][j]=a[i][j]-(a[1][j]*t3);
		}
	}
    for(i=1;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            cout<<"\t"<<a[i][j];
		}
        cout<<endl;
	}
	cout<<"Step: 3\n";
	float t4=a[2][2];
	for(i=2;i<3;i++)
	{
		for(j=1;j<5;j++)
		{
            a[i][j]=a[i][j]/t4;
		}
	}
	float t5=a[1][2];
	for(i=1;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
            a[i][j]=a[i][j]-(a[2][j]*t5);
		}
	}
	for(i=1;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            cout<<"\t"<<a[i][j];
		}
        cout<<endl;
	}
	cout<<"Step: 4\n";
	float t6=a[3][2];
	for(i=3;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            a[i][j]=a[i][j]-(a[2][j]*t6);
		}
	}
	for(i=1;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            cout<<"\t"<<a[i][j];
		}
        cout<<endl;
	}
	cout<<"Final answer:\n";
	float t7=a[3][3];
	for(i=3;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            a[i][j]=a[i][j]/t7;
		}
	}
	float t8=a[2][3];
	for(i=2;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
            a[i][j]=a[i][j]-(a[3][j]*t8);
		}
	}
	float t9=a[1][3];
	for(i=1;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
            a[i][j]=a[i][j]-(a[3][j]*t9);
		}
	}
	for(i=1;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
            cout<<"\t"<<a[i][j];
		}
        cout<<endl;
	}
	int y,x,z;
	z=a[3][4];
	y=a[2][4]-(a[2][3]*z);
	x=a[1][4]-(a[1][2]*y)-(a[1][3]*z);
	cout<<"X=  "<<x<<" Y=   "<<y<<" Z=  "<<z;
	return 0;
}
