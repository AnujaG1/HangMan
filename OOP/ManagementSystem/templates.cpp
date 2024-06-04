#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class Calculator{
    public:
    void add(T value)
    {
        data.push_back(value);
    }
    T get(int index)
    {
        return data[index];
    }
    private:
    vector <T> data;
};
int main()
{
    Calculator<int>intCalculator;
    intCalculator.add(10);
     intCalculator.add(10);
     cout<<"The sum is: "<<intCalculator.get(0)+intCalculator.get(1)<<endl;
   

    Calculator<float>floatCalculator;
    floatCalculator.add(10.3);
    floatCalculator.add(20.1);
    cout<<"THe sum is: "<<floatCalculator.get(0)+floatCalculator.get(1)<<endl;

    Calculator<string>stringCalculator;
    stringCalculator.add("Anuja ");
    stringCalculator.add("Gyawali !");
    cout<<"String is "<<stringCalculator.get(0)+stringCalculator.get(1)<<endl;
    return 0;
}