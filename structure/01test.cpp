#include<iostream>
using namespace std;
struct Part {
    double area;
    double exchange;
    double number;
};
int main()
{
    Part p ={212, 767,8900};
    Part p1;
    cout<<"Enter your area code, exchange, and number: ";
    cin>>p1.area>>p1.exchange>>p1.number;
    cout<<"My number is ("<< p.area<<") "<<p.exchange <<"-"<<p.number<<endl;
    cout<<"Your number is ("<<p1.area<<") "<<p1.exchange <<"-"<<p1.number<<endl;
    return 0;

}