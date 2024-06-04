#include<iostream>
using namespace std;
 int main()
 {
    try {
        int num1, num2;
        double result;
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        if(num2==0)
        {
            throw"Division by zero Error";
        }
   result = num1/num2;
   cout<<"Result is: "<<result<<endl;
    }
    catch(const char* error)
    {
        cerr<<"Error: "<<error<<endl;
    }
    return 0;
 }