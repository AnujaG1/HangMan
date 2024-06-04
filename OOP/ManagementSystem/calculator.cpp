#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
template <typename T>
class Calculator{
    private:
    vector<T>data;
  public:
    void num(T value1, T value2)
    {
        data.push_back(value1);
        data.push_back(value2);
    }
    T add(T num1, T num2)
    {
        return num1+num2;
    }
    T subtract(T num1, T num2)
    {
        return num1-num2;
    }
    T multiply(T num1, T num2) 
    {
        return num1*num2;
    }
    T divide(T num1, T num2)
    {
        try{
            if(num2 == 0)
            {
            throw "Error!!";
            }
        else
            {
            return num1/num2;
            }
        }
        catch(const char* error){
            cerr<<"Error:"<<error<<endl;
            }
    }
    
    T modulus(T num1, T num2)
    {
        try
        {
            if(num2 == 0)
            {
            throw "Zero Division Error ";
           
            }
            else
            {
            return fmod(num1,num2);
            }
        }
        catch(const char* error)
        {
        cerr<<"Error: "<<error<<endl;
        }
    }
    
};
int main()
{
    cout<<"Int data Calculation"<<endl;
  Calculator<int>intCalculator;
  int num1, num2;
  cout<<"Enter num1 and num2 : ";
  cin>>num1>>num2;
  intCalculator.num(num1,num2);
  cout<<"The sum is : "<< intCalculator.add(num1, num2)<<endl;
  cout<<"The difference is : "<< intCalculator.subtract(num1, num2)<<endl;
  cout<<"The multiplication is : "<< intCalculator.multiply(num1, num2)<<endl;
   cout<<"The divide is : "<< intCalculator.divide(num1, num2)<<endl;
  cout<<"The remainder is : "<< intCalculator.modulus(num1, num2)<<endl;
cout<<endl;


cout<<"float data Calculation."<<endl;
   Calculator<float>floatCalculator;
   float num3, num4;
  cout<<"Enter num3 and num4 : ";
  cin>>num3>>num4;
  floatCalculator.num(num3,num4);
  cout<<"The sum is : "<< floatCalculator.add(num3, num4)<<endl;
  cout<<"The difference is : "<< floatCalculator.subtract(num3, num4)<<endl;
  cout<<"The multiplication is : "<< floatCalculator.multiply(num3, num4)<<endl;
    cout<<"The divide is : "<< floatCalculator.divide(num3, num4)<<endl;
  cout<<"The remainder is : "<< floatCalculator.modulus(num3, num4)<<endl;
 
  return 0;
}