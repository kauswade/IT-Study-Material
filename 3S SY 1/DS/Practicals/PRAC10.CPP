#include<stdio.h>
#include<conio.h>
#define max 3
int i,j,temp,a[max];
void display(int a[])
{	for(i=0;i<max;i++)
		printf("%d,",a[i]);
}
void busort(int a[])
{	for(i=0;i<max;i++)
	for(j=0;j<max-1;j++)
	{	if(a[j]>a[j+1])
		{	temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
void main()
{    	clrscr();
	printf(" Enter Numbers :\n");
	for(i=0;i<max;i++)
		scanf("%d",&a[i]);
	printf(" Sequence before sorting :\n");
	display(a);
	busort(a);
	printf("\n Sequence after sorting :\n");
	display(a);
	getch();
}