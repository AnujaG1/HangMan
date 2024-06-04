// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ifstream f("anuja.txt");
//         if(!f.is_open())
//         {
//             cout<<"File can not be opened."<<endl;
//             return 1;
//         }
//         ofstream file("Destination.txt");
//         if(!file.is_open())
//         {
//             cout<<"File can not be opened."<<endl;
//             f.close();
//             return 1;
//         }
//         string line;
//         getline(f,line);
//         file<<line<<endl;   
//         file.close();
//         f.close();    
// return 0;
// }

#include <iostream>
#include<fstream>
using namespace std;

int main(){
 ofstream file("source.txt");
 if(file.is_open())
 {
  file<<"hello world! "<<endl;
  file.close();
 }
 else{
  cout<<"File not opened."<<endl;
 }

 ifstream myfile("source.txt");
 if(!myfile.is_open())
 {
  cout<<"File not opened.";
  myfile.close();
  return 1;
 }
 ofstream f("Destination.txt");
 if(!f.is_open())
 {
  cout<<"File can not be opened. "<<endl;
  f.close();
 }
string line;
getline(myfile, line);
f<<line<<endl;
f.close();
myfile.close();

  return 0;
}