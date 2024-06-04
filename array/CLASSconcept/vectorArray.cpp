#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<float> v;
    v.push_back(14);
     v.push_back(15);
 v.push_back(9);
  v.push_back(1);
   v.push_back(10);
    v.push_back(0);
    v.push_back(21);
    cout<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl<<endl;
cout<<sizeof(v)<<endl;
cout<<v.size()<<endl;
return 0;
}