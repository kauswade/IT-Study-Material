#include"iostream"
using namespace std;
#include<math.h>
void ci(float p, float r, float t, float n);
void si(float p, float r, float t);
int main()
{
	float p,r,n,t;
	cout<<" Enter Principle Amount : ";
	cin>>p;
	cout<<" Enter Rate of Interest : ";
	cin>>r;
	cout<<" Enter Number of Years : ";
	cin>>t;
	cout<<" Enter Number of times compounded annually : ";
	cin>>n;
	ci(p,r,t,n);
	si(p,r,t);
	return 0;
}
void ci(float p, float r, float t, float n)
{
	float ci;
	ci=(p* ( pow((1+(r/n)) ,(n*t)) ) );
	cout<<"\n Compound Interest : "<<ci;
}
void si(float p, float r, float t)
{
	float si;
	si=((p*r*t)/100);
	cout<<"\n Simple Interest : "<<si;
}
