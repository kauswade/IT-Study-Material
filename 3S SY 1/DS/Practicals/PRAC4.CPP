#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int top=-1;
char stack[20],exp[120];
int prio(char);
void push(char);
void pop();
void main()
{	clrscr();
	printf(" Program to convert infix notation to postfix notation using stack\n");
	printf(" Enter Infix Notation : ");
	scanf("%s",exp);
	printf(" Postfix Notation : ");
	for(int i=0;exp[i]!=NULL;i++)
	{	if(isalnum(exp[i]))
			printf("%c",exp[i]);
		else if(exp[i]=='(')
			push(exp[i]);
		else if(exp[i]==')')
			do{	pop();
			}while(stack[top]!='(');
		else
		{	if(prio(stack[top])>=prio(exp[i]))
				 pop();
			push(exp[i]);
		}
		push(exp[i]);
	}
	while(top!=-1)
		pop();
	getch();
}
int prio(char a)
{
	if(a=='+' || a=='-')
		return 1;
	else if(a=='*' || a=='/')
		return 2;
	else if(a=='(')
		return 0;
	else return -1;
}
void push(char a)
{	top++;
	stack[top]=a;
}
void pop()
{  	if(stack[top]!='(')
	{	printf("%c",stack[top]);
		top--;
	}
	else	top--;
}
