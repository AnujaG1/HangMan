#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1]="gyawali";
    m[13]="anuja";
    m[2]="pabitra";
    m.insert({5,"mahesh"});
    cout<<"Before erase:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 ->" <<m.count(13)<<endl;
    cout<<"After erase: "<<endl;
    m.erase(5);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"***************"<<endl;
    auto it = m.find(2);
    for(auto i = it; i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    

    return 0;

}