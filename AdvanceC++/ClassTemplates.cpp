#include<iostream>
#include<vector>
using namespace std;
template <class T>
class Container{
    public:
    void add(T value)
    {
        data.push_back(value);
    }
    T get(int index){
        return data[index];
    }
    private:
    vector<T>data;
};
int main()
{
    Container<int>intContainer;
    intContainer.add(10);
    intContainer.add(20);
    cout<<intContainer.get(1)<<endl;

    Container<string>stringContainer;
    stringContainer.add("Anuja");
    cout<<stringContainer.get(0)<<endl;

    Container<float>floatContainer;
    floatContainer.add(10.44);
    cout<<floatContainer.get(0)<<endl;

}
