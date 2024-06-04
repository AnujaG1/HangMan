#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
int main()
{
   Distance d1 , d3;
   Distance d2 = {11, 6.5};

   cout<<"enter distance d1 : ";
   cin>>d1.feet>>d1.inches;
   d3.inches = d1.inches+ d2.inches;
   d3.feet = 0;
   if(d3.inches>=12)
   {
    d3.inches-=12;
    d3.feet++;
   }
   d3.feet += d1.feet+d2.feet;
   cout<<"the sum is "<<d3.feet<<" and "<<d3.inches<<endl;
   return 0;

}