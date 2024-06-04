#include<iostream>
using namespace std;
class student 
{
    private:
    string name[10];
    float marks[10][10];
    public:
    void getData(int n)
    {
        cout<<"Enter data of students : "; cin>> n;
        for(int i =0;i<n;i++)
        {
            cout<<"Enter name of "<<i+1<<" student : "; cin>>name[i];
            for(int j =0;j<5;j++)
            {
                cout<<"Enter marks of "<<i+1<<" student in subject "<<j+1<<" : "; cin>>marks[i][j];
            }

        }
    }
    void showData(int n)
  
    {  
        cout<<endl;
        cout<<"***********************";
        cout<<"Information of Students.";
        cout<<"***********************";
        cout<<endl<<endl;
        int total[10]={0};
        for(int i =0;i<n;i++)
        {
            cout<<"Name is : "<<name[i]<<endl;
            for(int j=0;j<5; j++)
            {
                cout<<"Marks in sub "<<j+1<<" is: "<<marks[i][j]<<endl;
                total[i] += marks[i][j];
            }
            cout<<"The total score of "<<name[i]<<" is "<<total[i]<<endl<<endl;
        }   
    }
};
int main()
{
    student s;
    
    s.getData(3);
    s.showData(3);
 
}
