#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Anuja");
    s.push("Mahesh");
    s.push("Anita");
    s.push("Abhishekh");
    s.push("Asmita");
    s.push("Pabitra");
   cout<<"Front element is : "<<s.top()<<endl;
    cout<<"size is : "<<s.size()<<endl;
  s.pop();
  cout<<"Front element is : "<<s.top()<<endl;
  cout<<"size is : "<<s.size()<<endl;
  cout<<"Empty or not: "<<s.empty()<<endl;
}