#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    vector<float> a(5,1.3);
    cout<<"print a"<<endl;
    for(float i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // copy of vector a;
    vector<float> copy_a(a);
    cout<<"print copied: "<<endl;
    for(float i:copy_a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

// Capacity of vector
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
     v.push_back(2);
    cout<<v.capacity()<<endl;
     v.push_back(3);
    cout<<v.capacity()<<endl;
     v.push_back(9);
    cout<<v.capacity()<<endl;
     v.push_back(10);
    cout<<v.capacity()<<endl;

    // size of vector 
 cout<<"size is: "<< v.size()<<endl;

 //access elements;

 cout<<v.front()<<endl;
 cout<<v.back()<<endl;
cout<<v.at(4)<<endl;
 cout<<v.at(3)<<endl;
 
 cout<<"Before pop: "<<endl;
 for(int i:v)
 {
    cout<<i<<" ";
 }
 cout<<endl;
 v.pop_back();
 cout<<"After pop is : "<<endl;
 for(int i:v)
 {
    cout<<i<<" ";
 }
 cout<<endl;

 return 0;
}