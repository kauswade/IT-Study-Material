//program for gauss seidel method
#include<iostream>
#include<stdlib.h>
using namespace std;
int a[3][4];
void input();
int check();
void sswap();
void fun();
int main(){
	int x;
	input();
	sswap();
	x=check();
	if(x==0)
        goto l1;
	fun();
	l1:
	return 0;
}
void input(){
    for(int i=0;i<3;i++)
	{	cout<<" Enter Coefficients for equation "<<i+1<<endl;
		cout<<" a"<<i+1<<"1=";
		cin>>a[i][0];
		cout<<" a"<<i+1<<"2=";
		cin>>a[i][1];
		cout<<" a"<<i+1<<"3=";
		cin>>a[i][2];
		cout<<" b"<<i+1<<"=";
		cin>>a[i][3];
	}
}
int check(){
    if(abs(a[0][0])>abs(a[0][1])+abs(a[0][2])&&abs(a[1][1])>abs(a[1][0])+abs(a[1][2])&&abs(a[2][2])>abs(a[2][0])+abs(a[2][1])){
        cout<<" Condition Check: Pass!\n";
        return 1;
    }
    else{
        cout<<" Condition Check: Fail!\n";
        return 0;
    }
}
void sswap(){
    int t1,t2,t3,t4;
	if(a[1][0]>a[0][0]&&a[1][0]>a[2][1])
	{	t1=a[0][0]; t2=a[0][1]; t3=a[0][2]; t4=a[0][3];
		a[0][0]=a[1][0]; a[0][1]=a[1][1];
		a[0][2]=a[1][2]; a[0][3]=a[1][3];
		a[1][0]=t1; a[1][1]=t2; a[1][2]=t3; a[1][3]=t4;
	}
	else if(a[2][0]>a[0][0]&&a[2][0]>a[1][0])
	{	t1=a[0][0]; t2=a[0][1]; t3=a[0][2]; t4=a[0][3];
		a[0][0]=a[2][0]; a[0][1]=a[2][1];
		a[0][2]=a[2][2]; a[0][3]=a[2][3];
		a[2][0]=t1;a[2][1]=t2;a[2][2]=t3;a[2][3]=t4;
	}
	if(a[2][1]>a[1][1])
	{	t1=a[1][0]; t2=a[1][1]; t3=a[1][2]; t4=a[1][3];
		a[1][0]=a[2][0]; a[1][1]=a[2][1];
		a[1][2]=a[2][2]; a[1][3]=a[2][3];
		a[2][0]=t1; a[2][1]=t2; a[2][2]=t3; a[2][3]=t4;
	}
}
void fun(){
    float x=0,y=0,z=0,x0=0,y0=0,z0=0;
	for(int i=0;i<10;i++)
	{	x0=x;   y0=y;   z0=z;
	    x=(a[0][3]-a[0][1]*y-a[0][2]*z)/a[0][0];
		y=(a[1][3]-a[1][0]*x-a[1][2]*z)/a[1][1];
		z=(a[2][3]-a[2][0]*x-a[2][1]*y)/a[2][2];
		if(x==x0&&y==y0&&z==z0)
            break;
		cout<<" X="<<x<<"\tY="<<y<<"\tZ="<<z<<endl;
	}
}
