#include<stdio.h>
#include<conio.h>
int max=5,a[5],top;
void push();
void pop();
void peep();
void display();
void main()
{	int	ch;
	top=-1;
	clrscr();
	printf(" Program for stack that performs operations using array (PUSH,POP,PEEP,DISPLAY)");
	while(ch!=5)
	{	printf(" \nEnter Operation:\n");
		printf(" 1. Push\n");
		printf(" 2. Pop\n");
		printf(" 3. Peep\n");
		printf(" 4. Display\n");
		printf(" 5. Exit\n: ");
		scanf("%d",&ch);
		switch(ch)
		{	case 1 : push();	break;
			case 2 : pop();	break;
			case 3 : peep();	break;
			case 4 : display();	break;
			default : printf("\n Exiting!");
		}
	}
	getch();
}
void push()
{  	int value,i;
	if(top>=5)
	{	printf(" Overflow!");
	}
	else
	{	top++;
		printf("\n Enter Value : ");
		scanf("%d",&value);
		a[top]=value;
		printf("\n Value Inserted!\n");
	}
}
void pop()
{   if(top<0)
	{	printf(" Underflow!");
	}
	else
	{   printf("\n %d Deleted\n",a[top]);
		top=top-1;
	}
}
void peep()
{   if(top<0)
	{	printf(" Underflow!");
	}
	else
	{   printf("\n");
		printf(" Top=> %d\n",a[top]);
	}
}
void display()
{       printf("\n");
	for(int i=0;i<5;i++)
		printf(" %d, ",a[i]);
	printf("\n");
}