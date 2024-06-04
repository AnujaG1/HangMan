#include<iostream>
#include<deque>
using namespace std;
int main()
{
deque<int>d ;
d.push_back(1);
d.push_front(4);
d.push_back(3);
d.push_back(2);
d.push_front(5);
d.push_back(6);
d.push_back(7);
d.push_front(8);
d.push_back(11);
cout<<"size is:"<<d.size()<<endl;
cout<<"element is : "<<d.at(1)<<endl;
cout<<"last element is : "<<d.back()<<endl;
cout<<"front element is : "<<d.front()<<endl;
cout<<"";
for(int i:d)
{
    cout<<i<<" ";
}
cout<<endl;
cout<<"before pop size: "<<d.size()<<endl;
d.pop_front();
for(int i:d)
{
    cout<<i<< " ";
}
cout<<endl;
cout<<"After pop size: "<<d.size()<<endl;
cout<<"Empty or not: "<<d.empty()<<endl;

cout<<"Before erase size: "<<d.size()<<endl;
d.erase(d.end(), d.end()+2);
cout<<"after erase "<<d.size()<<endl;
for(int i:d)
{
    cout<<i<<" ";
}
cout<<endl;
cout<<"Before erase size: "<<d.size()<<endl;
d.erase(d.begin(), d.begin()+2);
cout<<"after erase "<<d.size()<<endl;
for(int i:d)
{
    cout<<i<<" ";
}
cout<<endl;

}
