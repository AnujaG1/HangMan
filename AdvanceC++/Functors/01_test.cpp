#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={44,22,0,89,40,2,11};
    // by default in ascending order.
    // sort(arr, arr+7); 
    //in descending order using functors
    sort(arr, arr+6, greater<int>());
    for(int i =0;i<7;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}