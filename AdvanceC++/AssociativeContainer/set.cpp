#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(0);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(10);
    s.insert(1);
   cout<<"size is: "<<s.size()<<endl;
   for(int i :s)
   {
    cout<<i<<" ";
   }
   cout<<endl;
   set<int>::iterator it = s.begin();
   it++;
   s.erase(it);
    for(int i :s)
   {
    cout<<i<<" ";
   }
   cout<<endl;
   
   cout<<"is 5 present or not ? "<<s.count(5)<<endl;

   set<int>::iterator itr = s.find(2);
   for(auto it = itr;it!=s.end();it++)
   {
    cout<<*it<<" ";
   }
   cout<<endl;
   return 0;
}