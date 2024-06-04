#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
cout<<"enter elements:";
cin>>arr[i];

    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}