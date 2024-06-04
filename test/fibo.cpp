#include<iostream>
using namespace std;
int main() {
     int a =0, b=1,c,n,i=0;
     cout<<"enter n : ";
     cin>> n;
     do {
        if(i<=1)
        {
            c =i;
        }
        else {
            c = a+b;
            a =b;
            b=c;
        }
        cout<<c<<" ";
        i++;
     }while(i<n);
     cout<<endl;
     return 0;

}