#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file("details.txt");
    if(!file.is_open())
    {
        cout<<"File can not be opened.";
        file.close();
        return 1;
    }
    string name[100];
    int marks[10];
    int n,i;
    cout<<"Enter NO. of students: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter name of "<<i+1<<"st student: ";
        cin>>name[i];
        cout<<"Enter marks of "<<i+1<<"st student: ";
        cin>>marks[i];
    }
    file<<"Students Details are: "<<endl;
    for(i=0; i<n;i++)
    {
        file<<"Name and Marks are: "<<name[i]<<" "<<marks[i]<<endl;
    }
    cout<<endl<<endl;
int temp,j;

    for(i=0;i<n-1;i++)
    {
        for(j = 0; j<n-i-1;j++)
        {
            if(marks[j]<marks[j+1])
        {
            temp= marks[j];
            marks[j] = marks[j+1];
            marks[j+1] = temp;

            string tempname = name[j];
            name[j] = name[j+1];
            name[j+1]= tempname;
        }
    }  
}
    file<<endl;
    file<<"*************************************************************************************"<<endl;
    file<<"\t\t The highest scorer and score  is : "<<endl;
    for(int k=0;k<n && k<3 ; k++)
    {
        file<<name[k]<<" "<<marks[k]<<endl;
    }


//for reading the file

ifstream f("details.txt");
if(!f.is_open())
{
    cout<<"File can not be opened.";
    f.close();
    return 1;
}
string line;
while(getline(f , line))
{
    cout<<line<<endl;
}

f.close();
    return 0;
}