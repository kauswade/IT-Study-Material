#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
	char ch;
	int i, count=0;
	char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char arr2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	ifstream ifile;
	clrscr();
	ifile.open("kaustubh.txt");
	while(ifile>>ch)
	{
		for(i=0;i<26;i++)
			if(arr[i]==ch || arr2[i]==ch)
				count++;
	}
	cout<<endl<<count;
	getch();
	return 0;
}