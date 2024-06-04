#include<iostream>
using namespace std;
class A {
    public:
    void speak()
    {
        cout<<"Barking.."<<endl;
    }
    void speak(string name)
    {
        cout<<name <<" is barking"<<endl;
    }
    int speak(string name , int n)
    {
        cout<<n<<" "<<name<<" is barking."<<endl;
    }
    
};
int main()
{
    A obj;
    obj.speak();
    obj.speak("Dog");
    obj.speak("Dog", 5);
    return 0;
}