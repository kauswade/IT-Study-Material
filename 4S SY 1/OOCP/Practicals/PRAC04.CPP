#include"iostream"
using namespace std;
int x,mx=0;
inline void max(int x)
{   if(x>mx)
		mx=x;
}
int main()
{
	for(int i=0;i<3;i++)
	{	cout<<"Enter Numbers : ";
		cin>>x;
		max(x);
	}
	cout<<" Max = "<<mx;
	return 0;
}







