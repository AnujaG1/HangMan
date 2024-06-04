#include<iostream>
using namespace std;
void check();
int main()
{
    check();
}
void check()
{
    int n,c,i,count=0;
    cout<<"enter a number";
    cin>>n;
    for(i=0;i<=(n/2);i++)
    {
       c = n/i;
       if (c==0)
       {
        count = count +1;
       }
       
       if(count == 2)
       {
        cout<<n<<"is composite number.";
       }
       else{
        cout<<n<<"is prime number.";
       }

    }
}