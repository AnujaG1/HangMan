#include<iostream>
using namespace std;
int main()
{
    int a ,b;
    float c;
    char ch;
    do {
        cout<<"enter a: ";
        cin>>a;
        cout<<"enter b : ";
        cin>>b;
        c = a%b;
        cout<< "the answer is "<< c<<endl;
        cout<< "do you want to continue ? ";
        cin >> ch;
        
    }while(ch!='n');
  
    return 0;
    
}