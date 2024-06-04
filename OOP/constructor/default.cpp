#include<iostream>
#include<string>
using namespace std;
class animal
{
    private:
    int count;
 
    public:
    void getData()
    {
     count++;
    }
    animal()
    {
       count =0; 
    }
    int showData()
    {
        return count;
    }

};
int main()
{
    animal a1;

  cout<<"\noutput is : "<< a1.showData()<<endl<<endl;

    a1.getData();
  cout<<"\noutput is : "<< a1.showData()<<endl<<endl;

   a1.getData();
  cout<<"\noutput is : "<< a1.showData()<<endl<<endl;

  a1.getData();
  cout<<"\noutput is : "<< a1.showData()<<endl<<endl;
return 0;
}