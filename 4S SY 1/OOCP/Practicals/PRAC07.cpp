#include<iostream>
using namespace std;
class DISTANCE
{       int feet,inch;
    public:
        void idist();
        void odist();
        void adist(DISTANCE d1, DISTANCE d2);
};
void DISTANCE :: idist()
{   cout<<" Enter Distance";
    cout<<"\n Feet : ";
    cin>>feet;
    cout<<" Inch : ";
    cin>>inch;
    cout<<endl;
}
void DISTANCE :: odist()
{   cout<<" Distance :\n Feet = "<<feet<<", Inch : "<<inch<<endl;
}
void DISTANCE :: adist(DISTANCE d1, DISTANCE d2)
{   feet=d1.feet+d2.feet;
    inch=d1.inch+d2.inch;
    feet+=inch/12;
    inch=inch%12;
}
int main()
{   DISTANCE d1,d2,d3;
    d1.idist();
    d2.idist();
    d3.adist(d1,d2);
    d3.odist();
    return 0;
}
