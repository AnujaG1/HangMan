#include<iostream>
using namespace std;
int main()
{
    float num1 , num2 , result;
    cout<<"Enter num1 and num2: ";
    cin>>num1>>num2;
    try
    {
     if(num2 == 0)
     {
        throw "Zero Division error!";
     } 
     else{
        result = num1/num2;
        cout<<result<<endl;
     }
    }
    catch(const char* error)
    {
        std::cerr << "Error!"<<endl;
    }
    
}