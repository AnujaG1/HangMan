#include<iostream>
using namespace std;

template <typename T> 
T maximum (T a, T b) 
{
        return (a>b)? a:b;
}
    
int main()
{
    int x =10, y = 13;
    cout<<"The maximum number is : "<<maximum(x,y)<<endl;
    
    float p = 5.5, q = 6.8;
    cout<<"Tne maximum number is : "<<maximum(p,q)<<endl;
    return 0;

}