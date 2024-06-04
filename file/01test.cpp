#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream myfile;
    // myfile.open("Example.txt");
    // myfile<<"This is a test.\n";
    // myfile.close();
    

    ifstream myfile;
    myfile.open("Example.txt");
    string a;
    getline(myfile, a);
    cout<<a<<endl;
    return 0;
}