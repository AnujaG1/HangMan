#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //making max heap
    priority_queue<int> maxi;
    maxi.push(1);
     maxi.push(9);
      maxi.push(0);
       maxi.push(4);
cout<<"Size of maxi: "<<maxi.size()<<endl;
int n = maxi.size();
for(int i=0;i<n;i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;

//making min heap
priority_queue<int , vector<int>, greater<int> > mini;
mini.push(2);
mini.push(9);
mini.push(0);
mini.push(-8);
int m = mini.size();
for(int i=0;i<m;i++)
{
cout<<mini.top()<<" ";
mini.pop();
}
cout<<endl;
cout<<"empty or not: "<<mini.empty()<<endl;


}