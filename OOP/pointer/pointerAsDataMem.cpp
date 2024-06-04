#include<iostream>
using namespace std;
class pointer
{
    private:
    int *ptr;
 
    public:
    void setPointer(int *n)
    {
     ptr = n;
    }
    void showData()
    {
    cout<<"\nThe pointer is "<<*ptr<<endl<<endl;
    }
};
int main()
{
    int num = 9;
    pointer p;
    p.setPointer(&num);
    p.showData();
    return 0;
}