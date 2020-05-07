#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int queue[max],front=0,back=0;
void insert()
{       int x;
	printf(" Enter Value : ");
	scanf("%d",&x);
	if(back==max-1)
		printf("\t Queue Overflow!\n");
	else
		queue[back++]=x;
}
void ddelete()
{	if(back==0 || front==back)
		printf("\t Queue Underflow!\n");
	else
	{	printf(" %d Deleted.\n",queue[front++]);
	}
}
void display()
{       if(back==0 || front==back)
		printf(" Queue Underflow!\n");
	else
	{	for(int i=front;i<back;i++)
			printf(" %d,",queue[i]);
		printf("\n");
	}
}
void main()
{       int ch;
	clrscr();
	while(1)
	{	printf(" Enter Operation\n 1. Insert\n 2. Delete\n");
		printf(" 3. Display\n 4. Exit\n :");
		scanf("%d",&ch);
		switch(ch)
		{	case 1 : insert();	break;
			case 2 : ddelete();	break;
			case 3 : display();	break;
			case 4 : printf(" Exiting!");	getch();
				 exit(0);
			default : printf(" Invalid Input!\n");
		}
	}
}