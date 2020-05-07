#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{	int data;
	struct node *next;
};
struct node *newnode, *start, *ptr, *a ,*b, *ptr1, *end;
char che;
int value;
void endch()
{	ptr=start;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	end=ptr;
}
void display(struct node *c)
{	c=start;
	endch();
	if(start==NULL || start==end)
		printf(" Linklist Empty!\n");
	else
	{	printf("\n Linklist : \nStart");
		while(c!=NULL)
		{	printf(" %d,",c->data);
			c=c->next;
		}
	}
}
void func1()
{	do
	{       newnode = (struct node*) malloc (sizeof(struct node));
		printf("\n Enter Data : ");
		scanf("%d",&value);
		if(start==NULL)
		{	newnode->data=value;
			newnode->next=NULL;
			start=newnode;
		}
		else
		{       newnode->data=value;
			newnode->next=start;
			start=newnode;
		}
		printf(" Do you want to add more? ");
		che=getche();
	}while(che=='y' || che=='Y');
	display(start);
}
void func2()
{	do
	{	newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter Value : ");
		scanf("%d",&value);
		if(start==NULL)
		{	newnode->data=value;
			newnode->next=NULL;
			start=newnode;
		}
		else
		{       ptr=start;
			newnode->data=value;
			newnode->next=NULL;
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=newnode;
		}
		printf(" Do you want to continue? ");
		che=getche();
	}while(che=='y' || che=='Y');
	display(start);
}
void func3()
{	a=b=start;
	int temp;
	while(a!=NULL)
	{	while(b->next!=NULL)
		{	if(b->data > b->next->data)
			{	temp=b->data;
				b->data=b->next->data;
				b->next->data=temp;
			}
			b=b->next;
		}
		a=a->next;
		b=start;
	}
	display(start);
}
void func4()
{	if(start==NULL)
		printf(" Linklist Empty!");
	else
	{	start=start->next;
		display(start);
	}
}
void func5()
{	int x;
	printf("\n Enter Element after that position :");
	scanf("%d",&x);
	if(start==NULL)
		printf(" Linklist Empty!");
	else
	{	if(start->data==x)
			printf(" Not Possible!");
		else
		{	ptr=start;
			while(ptr->next->next->data!=x)
				ptr=ptr->next;
			ptr->next=ptr->next->next;
		}
		display(start);
	}
}
void func6()
{	int x;
	printf("\n Enter Element before that position :");
	scanf("%d",&x);
	endch();
	if(start==NULL)
		printf(" Linklist Empty!");
	else
	{	if(end->data==x)
			printf(" Not Possible!");
		else
		{	ptr=start;
			while(ptr->data!=x)
				ptr=ptr->next;
			ptr->next=ptr->next->next;
		}
		display(start);
	}
}
void main()
{	char ch;
	int x;
	clrscr();
	start=NULL;
	do
	{	printf("\n Main Menu\n");
		printf(" 1. Insert at Beginning.\n");
		printf(" 2. Insert at End.\n");
		printf(" 3. Insert and Sort.\n");
		printf(" 4. Delete First Element.\n");
		printf(" 5. Delete before Specific Element.\n");
		printf(" 6. Delete after Specific Element.\n :");
		scanf("%d",&x);
		switch(x)
		{	case 1 : func1();	break;
			case 2 : func2();	break;
			case 3 : func3();	break;
			case 4 : func4();	break;
			case 5 : func5();	break;
			case 6 : func6();	break;
			default : printf(" Invalid Input!\n")	;
		}
		printf("\n Do you want to continue to Main Menu?");
		ch=getche();
	}while(ch=='y' || ch=='Y');
	getch();
}