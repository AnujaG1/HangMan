#include<iostream>
#include<string>
using namespace std;
int main()
{
    int ptr = 10;
    int *num = &ptr;
    int **nump = &num;
    cout<<nump<<endl;
cout << "Type of ptr: " << typeid(ptr).name() << endl;
    cout << "Type of num: " << typeid(num).name() << endl;
    cout << "Type of ptr: " << typeid(nump).name() << endl;
  
    return 0;
}