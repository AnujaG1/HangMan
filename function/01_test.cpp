#include<iostream>
using namespace std;
int add(int a, int b);
int main()
{
    int a, b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    a = add(a,b);
    cout<<"the sum is "<<a<<endl;
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a+b;
    return c;
}