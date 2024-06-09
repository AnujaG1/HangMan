#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{
    ofstream hout("opp.txt");
    cout<<"Enter your name: ";
    string name;
    getline(cin,name);
    hout<<"My name is  "+ name<<endl;
    hout<<"I am 20 years old."<<endl;
    hout.close();

    ifstream hin("opp.txt");
    string content;
    getline(hin,content);
    cout<<"The content of this file is: "<< content;
    hin.close();
    return 0;

}