#include<iostream>
#include<string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};
int main()
{
    Date d;
    char delimiter;
    cout<<"Enter date: ";
    cin>>d.day>>delimiter>>d.month>>delimiter>>d.year;
    cout<<"The date is: "<< d.day<<"/"<<d.month<<"/"<<d.year<<endl;
    return 0;
}