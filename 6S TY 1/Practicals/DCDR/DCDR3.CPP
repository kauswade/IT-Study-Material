#include<iostream.h>
#include<conio.h>
#define max 5
int main()
{
	clrscr();
	float res = 0.0, arrprb[max], arrcode[max];
	int i;
	for(i=0;i<max;i++)
	{
		cout<<" Enter Probability of Variable 1 : ";
		cin>>arrprb[i];
		cout<<" Enter Code Length : ";
		cin>>arrcode[i];
		res += arrprb[i]*arrcode[i];
	}
	cout<<" Length : "<<res;
	getch();
	return 0;
}