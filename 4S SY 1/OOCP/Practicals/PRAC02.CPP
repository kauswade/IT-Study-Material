#include"iostream"
using namespace std;
void entry(int a[2][2]);
void display(int a[2][2]);
void add(int a[2][2],int b[2][2]);
void sub(int a[2][2],int b[2][2]);
int main()
{
	int a[2][2], b[2][2];
	cout<<"For array A:";
	entry(a);
	cout<<"For array B:";
	entry(b);
	cout<<"Array A:\n";
	display(a);
	cout<<"Array B:\n";
	display(b);
	add(a,b);
	sub(a,b);
	return 0;
}
void entry(int a[2][2])
{
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
		{
			cout<<"\n Enter Element at location "<<i+1<<","<<j+1<<" : ";
			cin>>a[i][j];
		}
}
void display(int a[2][2])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void add(int a[2][2], int b[2][2])
{
	int c[2][2];
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
		{
			c[i][j]=(a[i][j] + b[i][j]);
		}
		cout<<"Addition:\n";
		display(c);
}
void sub(int a[2][2], int b[2][2])
{
	int c[2][2];
		for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
		{
			c[i][j]=(a[i][j] - b[i][j]);
		}
		cout<<"Subtraction:\n" ;
		display(c);
}
