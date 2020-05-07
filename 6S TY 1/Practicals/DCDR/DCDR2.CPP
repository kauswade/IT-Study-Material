#include<iostream.h>
#include<conio.h>
#include<math.h>
#define max 5
int main()
{
	clrscr();
	char arrvar[max];
	int i;
	double temp, arrprb[max], ent = 0.0;
	for(i=0;i<max;i++)
	{
		cout<<" Enter Variable name : ";
		cin>>arrvar[i];
		cout<<" Enter it's probability : ";
		cin>>arrprb[i];
	}
	cout<<" Self Info."<<endl;
	for(i=0;i<max;i++)
	{
		cout<<arrvar[i]<<" : ";
		temp= -1 * (arrprb[i]) * log(arrprb[i]) / (log(2.0));
		cout<<temp<<endl;
		ent+=temp;
	}
	cout<<" Entropy = "<<ent;
	getch();
	return 0;
}