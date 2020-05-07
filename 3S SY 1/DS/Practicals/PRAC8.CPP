#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{	int data;
	struct node *next;
};
struct node *ptr, *start, *first;
int yy;
void display()
{       ptr=start;
	if(start==NULL)
		printf(" Empty!");
	else
	{	while(ptr!=NULL)
		{	printf("%d, ",ptr->data);
			ptr=ptr->next;
		}
	}
}
void push()
{       ptr = (struct node*) malloc (sizeof(struct node));
	printf(" Enter Value : ");
	scanf("%d",&yy);
	if(start==NULL)
	{	ptr->data=yy;
		ptr->next=NULL;
		start=ptr;
	}
	else
	{	ptr->data=yy;
		ptr->next=start;
		start=ptr;
	}
	display();
}
void pop()
{	if(start->next==NULL)
		start=NULL;
	else if(start==NULL)
		display();
	else
		start=start->next;
	display();
}
void peep()
{	printf("%d\n",start->data);
}
void main()
{       char ch;
	int bb;
	clrscr();
	start=NULL;
	do
	{       printf("\n Enter Opeartion\n");
		printf(" 1. Push\n 2. Pop\n 3. Peep\n :");
		scanf("%d",&bb);
		switch(bb)
		{	case 1 : push();	break;
			case 2 : pop();	break;
			case 3 : peep();	break;
			default : printf(" Invalid input!\n");
		}
		printf("\n Do you want to continue? ");
		ch=getche();
	}while(ch=='y' || ch=='Y');
	getch();
}