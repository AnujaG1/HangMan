#include<iostream>
using namespace std;
class animal
{
    private:
    int height;
    string name;
    float weight;
    public:
    void getData();
    void showData();

};
inline void animal::getData()
{
     cout<<"name of animal: "<<endl;
    cin>>name;
    cout<<"height of animal: "<<endl;
    cin>>height;
    cout<<"weight of animal: "<<endl;
    cin>>weight;
}
inline void animal::showData()
{
    cout<<"Name is : "<<name<<endl;
    cout<<"Height is : "<<height<<endl;
    cout<<"Weight is : "<<weight<<endl;
}
int main()
{
    animal a1, a2;
    a1.getData();
    a2.getData();
    cout<<"\n the details of a1 is :"<<endl;
    a1.showData();
    cout<<"\n The Details of a2 is :"<<endl;
    a2.showData();
    return 0;
}