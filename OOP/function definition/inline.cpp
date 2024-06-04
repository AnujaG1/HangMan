#include<iostream>
using namespace std;
class animal{
private:
int weight;
int height;
public:
int getWeight(){
    return this->weight;
}
int getHeight()
{
    return this->height;
}
void setWeight(int W)
{
    this->weight = W;
}
void setHeight(int H){
    this->height = H;
}
};
int main()
{
    animal obj1, obj2;
    obj1.setWeight(20);
    obj1.setHeight(21);
    obj2.setWeight(50);
    obj2.setHeight(12);
    cout<<"obj1 weight is "<<obj1.getWeight()<<endl;
    cout<<"obj1 height is "<<obj1.getHeight()<<endl;
    cout<<"obj2 weight is "<<obj2.getWeight()<<endl;
    cout<<"obj2 height is "<<obj2.getHeight()<<endl;
    return 0;

}
