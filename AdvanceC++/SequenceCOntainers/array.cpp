#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int, 4> a = {1,2,3,4};
    cout<<a[1]<<endl;
int size = a.size();
for(int i=0;i<size;i++)
{
    cout<<a[i]<<" ";
}
cout<<"The element is :"<<a.at(2)<<endl;
cout<<"Empty or nopt: "<<a.empty()<<endl;
cout<<"Front element is: "<<a.front()<<endl;
cout<<"Back element is : "<<a.back()<<endl<<endl;

array<string, 5> b= {"Anu", "Anuj", "Anupa", "Anuja", "Ayusha"};
int s = b.size();
for(int k =0;k<s;k++)
{
cout<<b[k]<<" ";
}
cout<<endl;
cout<<b.at(2)<<endl;
cout<<b.front()<<endl;
cout<<"Back is: " <<b.back()<<endl;
cout<<b.empty()<<endl;
return 0;
}