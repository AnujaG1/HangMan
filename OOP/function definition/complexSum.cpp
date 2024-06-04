#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float img;
    public:
    void getData()
    {
        cout<<"Enter Real part of complex numbers: "<<endl;
        cin>>real;
        cout<<"Enter imaginary part of complex number: "<<endl;
        cin>>img;
    }
    void showData()
    {
        cout<<"("<<real<<","<<img<<")"<<endl;
    }
    void sumData(complex c1, complex c2)
    {
     real = c1.real+c2.real;
     img = c1.img+c2.img;
    }
};
int main()
{
    complex c1, c2,c3;
    cout<<"1st complex number is : "<<endl;
    c1.getData();
    c1.showData();
    cout<<"2nd complex number is : "<<endl;
    c2.getData();
    c2.showData();


    cout<<"the sum is : ";
    c3.sumData(c1,c2);
    c3.showData();
    return 0;
}