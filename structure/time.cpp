#include<iostream>
using namespace std;
struct Time {
    int hrs;
    int mins;
    int secs;
};
int main()
{
Time t1, t2, t3;
cout<<"Enter time in hours, minutes and seconds: ";
cin>>t1.hrs>>t1.mins>>t1.secs;
cout<<"Enter time in hours, minutes and seconds: ";
cin>>t2.hrs>>t2.mins>>t2.secs;
t3.secs = t1.secs+t2.secs;
t3.mins=0;
if(t3.secs>=60){
    t3.secs-=60;
    t3.mins++;
}
t3.mins+=t1.mins+t2.mins;
t3.hrs =0;
if(t3.mins>=60)
{
    t3.mins-=60;
    t3.hrs++;
}
t3.hrs+=t1.hrs+t1.hrs;
cout<<"the sum of time is "<<t3.hrs<<"hrs "<<t3.mins<<"mins "<<t3.secs<<"secs "<<endl;
return 0;
}