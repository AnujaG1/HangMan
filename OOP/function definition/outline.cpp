#include<iostream>
using namespace std;
class animal{
    private:
    string name;
    int weight;
    int height;
    public:
   void getData();
   void showData();
};
void animal::getData()
{
    cout<<"name of animal: "<<endl;
    cin>>name;
    cout<<"height of animal: "<<endl;
    cin>>height;
    cout<<"weight of animal: "<<endl;
    cin>>weight;
}
void animal::showData()
{
    cout<<"Name is : "<<name<<endl;
    cout<<"Height is : "<<height<<endl;
    cout<<"Weight is : "<<weight<<endl;
}
int main()
{
    animal obj1, obj2;
    obj1.getData();
    obj2.getData();
    cout<<"obj1 data is " <<endl;
    obj1.showData();
    cout<<"\n*********************************************************************************************************"<<endl;
    cout<<"\n obj2 height is "<<endl;
    obj2.showData();
    return 0;

}
