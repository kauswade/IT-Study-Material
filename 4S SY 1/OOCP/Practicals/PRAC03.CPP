#include"iostream"
using namespace std;
int y;
int rec(int x);
int main()
{
	cout<<" Enter Limit : ";
	cin>>y;
	for(int i=0;i<y;i++)
		cout<<" ,"<<rec(i);
	return 0;
}
int rec(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else
		return (rec(x-2)+rec(x-1));
}
