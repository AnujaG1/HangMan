#include<iostream>
using namespace std;
struct Employee
{
    int num;
    float salary;
};
int main()
{
    Employee s[10];
    int i=3;
    for(i=0;i<3;i++)
    {
        cout<<" Enter "<<i+1 <<"st employee num and employee salary: ";
        cin>>s[i].num>>s[i].salary;
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        cout<<"The number and salary of "<<i+1<<"st employee is "<<s[i].num<<" and "<<"$"<<s[i].salary<<endl;
    }
    return 0;
}