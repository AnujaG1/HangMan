#include<iostream>
using namespace std;
int main()
{
    void array(int* , int*);
    {
int n1,n2,n3,n4;
char delimiter;
cout<<"enter four values: ";
cin>>n1>>delimiter>>n2>>delimiter>>n3>>delimiter>>n4;
array(&n1 , &n2);
array(&n3, &n4);
    }
}
void array(int *num1, int *num2)
{
    int temp;
    if(*num1>*num2)
    {
        cout<<*num1<< " comes after " <<*num2 <<endl;
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
        cout<<"After swapping, num1 is "<<*num1<<" and num2 is "<<*num2<<endl;
    }
    else{
        cout<<*num2 <<" comes after " <<*num1<<endl;

     
    }
}