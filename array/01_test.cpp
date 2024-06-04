#include<iostream>
using namespace std;
int main()
{
    int i,a[10],n;
    cout<<"enter order of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter elements of array";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cout<<"the "<<i+1<<"th element of array is "<<a[i]<<endl;
    }
    return 0;
}