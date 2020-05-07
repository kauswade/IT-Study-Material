#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{	int data;
	struct node *prev, *next;
};
struct node *start, *ptr, *newn;
int x;
void disp()
{	if(start==NULL)
		printf(" Empty!\n");
	else
	{       ptr=start;
		while(ptr!=NULL)
		{	printf(" %d,",ptr->data);
			ptr=ptr->next;
		}
	}
}
void func1()
{	newn = (struct node*) malloc (sizeof(struct node));
	printf("\n Enter Value : ");
	scanf("%d",&x);
	if(start==NULL)
	{	newn->data=x;
		newn->next=NULL;
		newn->prev=NULL;
		start=newn;
	}
	else
	{ 	newn->data=x;
		newn->next=start;
		newn->prev=NULL;
		start=newn;
	}
	disp();
}
void func2()
{       newn = (struct node*) malloc (sizeof(struct node));
	printf("\n Enter Value : ");
	scanf("%d",&x);
	if(start==NULL)
	{	newn->data=x;
		newn->next=NULL;
		newn->prev=NULL;
		start=newn;
	}
	else
	{       ptr=start;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		newn->data=x;
		newn->next=NULL;
		newn->prev=ptr;
		ptr->next=newn;
	}
	disp();
}
void func3()
{	if(start->next==NULL)
		start=NULL;
	else
	{       ptr=start;
		while(ptr->next->next!=NULL)
			ptr=ptr->next;
		ptr->next=NULL;
	}
	disp();
}
void func4()
{	printf(" Enter node after that position : ");
	scanf("%d",&x);
	if(start->data==x)
		printf(" Cannot Delete the element!\n");
	else
	{       if(start->next->data==x)
		{	start=start->next;
		}
		else
		{	ptr=newn=start;
			while(ptr->next->data!=x)
			{       newn=ptr;
				ptr=ptr->next;
			}
			newn->next=ptr->next;
			ptr->next->prev=newn;
		}
	}
	disp();
}
void main()
{	char ch;
	int ce;
	clrscr();
	do
	{       printf("\n Enter Opearation :\n");
		printf(" 1. Insert at front.\n 2. Insert at end.\n");
		printf(" 3. Delete Last node.\n 4. Delete node before specified position.\n");
		printf(" : ");
		scanf("%d",&ce);
		switch(ce)
		{	case 1 : func1();	break;
			case 2 : func2();	break;
			case 3 : func3();	break;
			case 4 : func4();	break;
			default : printf("\n Invalid Input!\n");
		}
		printf("\n Do you want to continue? ");
		ch=getche();
	}while(ch=='y' || ch=='Y');
	getch();
}