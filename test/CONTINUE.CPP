#include<iostream>
using namespace std;
int main()
{
    int a,b,q,r;
    char ch;
    do
    {
        cout<<"enter a and b: ";
        cin >>a >>b;
        if (b==0)
        {
            cout<<"invalid .."<<endl;
            continue;
        }
        else{
            q = a/b;
            r= a%b;
            cout<<"q and r are "<<q<<" and "<<r<<endl;
        }
        cout<<"do you want to continue? (y/n) ";
        cin>>ch;
      
        /* code */
    } while (ch!='n');
  
    return 0;
    
}