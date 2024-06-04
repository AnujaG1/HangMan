#include<iostream>
using namespace std;
enum day {sun, mon, tue, wed,thurs,fri,sat};
int main()
{
    day d1, d2;
    d1 = mon;
    d2 = thurs;
    cout<<d1-d2<<endl;
    if(d1>d2)
    {
        cout<<"day1 comes before day2."<<endl;
    }
    else
    {
        cout<<"day2 comes before day1."<<endl;
    }
    return 0;

}