#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{	int i,j,k,n,*ptr1,*ptr2;
	clrscr();
	printf(" Program to show DMA via functions malloc(), calloc(), free()\n");
	printf(" Enter Number of elements to be stored : ");
	scanf("%d",&n);
	ptr1=(int*)malloc(n*sizeof(int));
	ptr2=(int*)calloc(n,sizeof(int));
	if(ptr1==NULL||ptr2==NULL)
	{      	printf(" Error!");	exit(0);	}
	printf(" Enter Elements : \n");
	for(i=0;i<n;i++)
	{	scanf("%d",ptr1+i);
		*(ptr2+i)=*(ptr1+i);
	}
	printf(" Elements stored using malloc() : \n");
	for(j=0;j<n;j++)
		printf(" %d,",*(ptr1+j));
	printf("\n Elements stored using calloc() : \n");
	for(k=0;k<n;k++)
		printf(" %d,",*(ptr2+k));
	free(ptr1);
	free(ptr2);
	getch();
}