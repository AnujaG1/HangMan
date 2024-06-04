#include <iostream>
#include<string>
#include<cstring>
#include<vector>
#include<limits>
#include<iomanip>
#include "termcolor.hpp"
using namespace std;
class Record {
  private:
  int roll;
  string name;
  string fname;
  string DOB;
  string branch;
  double year;
  double passYear;
  string state;
  int pin;
  string country;

  public:

    void setRoll(int roll) { this->roll = roll; }
    void setName(string name) { this->name = name; }
    void setFname(string fname) { this->fname = fname; }
    void setDOB(string dob) { DOB = dob; }
    void setBranch(string branch) { this->branch = branch; }
    void setYear(double yoa) { year = yoa; }
    void setPyear(double yop) { passYear = yop; }
    void setState(string state) { this->state = state; }
    void setPin(int pin) { this->pin = pin; }
    void setCountry(string country) { this->country = country; }

     int getRoll() const { return roll; }
    const string &getName() const { return name; }
    const string &getFname() const { return fname; }
    const string &getDOB() const { return DOB; }
    const string &getBranch() const { return branch; }
    double getYear() const { return year; }
    double getPyear() const { return passYear; }
    const string &getState() const { return state; }
    int getPin() const { return pin; }
    const string &getCountry() const { return country; }


void printDetails() const {
  std::cout << setw(10) << roll << setw(15) << name << setw(20) << fname
             << setw(10) << DOB << setw(15) << branch << setw(10) << year
             << setw(10) << passYear << setw(15) << state << setw(10) << pin
             << setw(15) << country << termcolor::reset << endl;

}
};
void add(Record student[],int &st)
{
  Record rec;
  string name,fname, dob, branch, state, country;
  int roll, pin;
  double yoa, yop;
  std::cout<<termcolor::yellow<<"Enter roll_no :";
  std::cin>>roll;
  std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
  std::cout<<termcolor::yellow<<"Enter student name: ";
  getline(cin,name);
 std:: cout<<termcolor::yellow<<"Enter Father's Name: ";
  getline(cin,fname);
  std::cout<<termcolor::yellow<<"Enter date of birth: ";
  getline(cin,dob);
  std::cout<<termcolor::yellow<<"Enter branch name: ";
  getline(cin,branch);
  std::cout<<termcolor::yellow<<"Enter year of admissions: ";
  std::cin>>yoa;
  std::cout<<termcolor::yellow<<"Enter tentative year of passing: ";
  std::cin>>yop;
  std::cout<<termcolor::yellow<<"Enter state: ";
  std::cin>>state;
  std::cout<<termcolor::yellow<<"Enter pin: ";
  std::cin>>pin;
  std::cout<<termcolor::yellow<<"Enter country: ";
  std::cin>>country;
  
  rec.setRoll(roll);
  rec.setName(name);
  rec.setFname(fname);
  rec.setDOB(dob);
  rec.setBranch(branch);
  rec.setYear(yoa);
  rec.setPyear(yop);
  rec.setState(state);
  rec.setPin(pin);
  rec.setCountry(country);
  
  student[st] = rec;
  st++;
  std::cout<<termcolor::green<<"Student record added successfully."<<endl;

}
void update(Record student[], int &st)
{
  int roll;
 
  bool found = false;
 
 std:: cout<<termcolor::yellow<<"Enter roll no.:";
  std::cin>>roll;
  std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
  for(int i= 0;i<st;i++)
  {
   
    if(student[i].getRoll() == roll)
    { found = true; 
     string name, fname, dob, branch, state, country;
            double yoa, yop;
            int pin;

            cout << "Enter updated student details:" << endl;
            cout << "Enter student name: ";
            getline(cin, name);
            cout << "Enter Father's Name: ";
            getline(cin, fname);
            cout << "Enter date of birth: ";
            getline(cin, dob);
            cout << "Enter branch name: ";
            getline(cin, branch);
            cout << "Enter year of admissions: ";
            cin >> yoa;
            cout << "Enter tentative year of passing: ";
            cin >> yop;
            cout << "Enter state: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, state);
            cout << "Enter pin: ";
            cin >> pin;
            cout << "Enter country: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, country);

             student[i].setName(name);
            student[i].setFname(fname);
            student[i].setDOB(dob);
            student[i].setBranch(branch);
            student[i].setYear(yoa);
            student[i].setPyear(yop);
            student[i].setState(state);
            student[i].setPin(pin);
            student[i].setCountry(country);
            cout << termcolor::green << "Record updated successfully." << termcolor::reset << endl;
            break;
    }
  }
 if(!found)
  {
    std::cout<<"No data found."<<endl;
    return ;
  }
  
}
void delete_rec(Record student[], int &st)
{ 
if(st == 0)
{
    std::cout<<termcolor::red<<"No students"<<endl;
    return ;
}
 int roll;

std::cout<<termcolor::yellow<<"Enter roll no. :";
std::cin>>roll;
 std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

 bool found = false;
 for(int i = 0 ; i<st ; i++)
 { 
    if(student[i].getRoll() == roll)
    {  found = true;
        for(int j=i; j < st-1 ; j++)
        {
            student[j] = student[j+1];
        }
        st--;
        std::cout<<termcolor::red<<"Student record deleted."<<endl;
        break;
    }
 }
if(!found)
{
  std::cout<<termcolor::red<<"Student not found"<<endl;
}
}
void report_name(Record student[], int &st)
{
  int i,j;
  bool found =false;
  if(st == 0)
  {
    std::cout<<termcolor::red<<"NO STUDENTS."<<endl;
    return ;
  }
 
  std::cout<<termcolor::red<<"\t\tReport based on same Student's Name: "<<endl;

  cout<<termcolor::green<<  setw(10) << "Roll" << setw(15) << "Name" << setw(20) << "Father's Name"
         << setw(10) << "DOB" << setw(15) << "Branch" << setw(10) << "YOA"
         << setw(10) << "YOP" << setw(15) << "State" << setw(10) << "Pin"
         << setw(15) << "Country" <<"\033[0m"<< endl;
  
 std::cout<<endl;
  for(i=0;i<st-1;i++)
  { 
   for(j=i+1;j<st;j++)
   {
    if(strcmp(student[i].getName().c_str(),student[j].getName().c_str()) == 0)
    {
     found = true;

     student[i].printDetails();
     student[j].printDetails();
     break;
    }
   }
  }
  
  if(!found)
  {
    std::cout<<"No same Name."<<endl;
    return ;
  }
}
void report_state(Record student[], int &st)
{
  int i,j;
  bool found =false;
  if(st == 0)
  {
    std::cout<<"NO STUDENTS."<<endl;
    return ;
  }
   
   std::cout<<termcolor::red<<"\t\tReport based on same Student's State: "<<endl;
     cout <<termcolor::green << setw(10) << "Roll" << setw(15) << "Name" << setw(20) << "Father's Name"
         << setw(10) << "DOB" << setw(15) << "Branch" << setw(10) << "YOA"
         << setw(10) << "YOP" << setw(15) << "State" << setw(10) << "Pin"
         << setw(15) << "Country"<< "\033[0m"<< endl;
  for(i=0;i<st-1;i++)
  {
   for(j=i+1;j<st;j++)
   {
    if(strcmp(student[i].getState().c_str(),student[j].getState().c_str()) == 0)
    {
     found = true;
     student[i].printDetails();
    student[j].printDetails();

     break;
    }
   }
  }
  if(!found)
  {
    std::cout<<"No same State."<<endl;
    return ;
  }
}
void report_country(Record student[], int &st)
{
  int i,j;
  bool found = 0;
  if(st == 0)
  {
    std::cout<<termcolor::red<<"NO STUDENTS."<<endl;
    return ;
  }
  
   std::cout<<termcolor::red<<"\t\tReport based on same Student's Country: "<<endl;
     cout <<termcolor::green << setw(10) << "Roll" << setw(15) << "Name" << setw(20) << "Father's Name"
         << setw(10) << "DOB" << setw(15) << "Branch" << setw(10) << "YOA"
         << setw(10) << "YOP" << setw(15) << "State" << setw(10) << "Pin"
         << setw(15) << "Country" << "\033[1m"<< endl;
  for(i=0;i<st-1;i++)
  {
   for(j=i+1;j<st;j++)
   {
    if(strcmp(student[i].getCountry().c_str(),student[j].getCountry().c_str()) == 0)
    {
     found = true;
     student[i].printDetails();
          student[j].printDetails();
     break;
    }
   }
  }
  if(!found)
  {
    std::cout<<"No same Country."<<endl;
    return ;
  }
}
void show(Record student[] , int &st)
{bool found =0;
  std::cout<<termcolor::red<<"\t\tReport of total students:  "<<endl;
     cout <<termcolor::green  << setw(10) << "Roll" << setw(15) << "Name" << setw(20) << "Father's Name"
         << setw(10) << "DOB" << setw(15) << "Branch" << setw(10) << "YOA"
         << setw(10) << "YOP" << setw(15) << "State" << setw(10) << "Pin"
         << setw(15) << "Country" <<endl;
for(int i=0;i<st;i++)
{ found = true;
  student[i].printDetails();
}
if(!found)
  {
    std::cout<<"No Record."<<endl;
    return ;
  }
}



int main(){
 Record student[100] ;
 int st = 0;
  int ch,choice;
bool running = true;
cout<<endl;
std::cout<< "\033[1m"<< "\t"<<termcolor::red<<"Welcome to the record system of students"<<endl;
while(running)
{
  std::cout<<endl;
  std::cout<< "\t"<<"\033[1m"<<termcolor::blue<<"Menu" <<endl;
  std::cout<<termcolor::yellow<<"(a) Input/Add to the list"<<endl;
  std::cout<<termcolor::yellow<<"(b) Update a record"<<endl;
  std::cout<<termcolor::yellow<<"(c) Delete record"<<endl;
  std::cout<<termcolor::yellow<<"(d) Generate a report based on the following input parameters."<<endl;
  std::cout<<termcolor::yellow<<"\t (i) persons (students) with common name."<<endl;
  std::cout<<termcolor::yellow<<"\t (ii) persons (students) with common state."<<endl;
  std::cout<<termcolor::yellow<<"\t (iii)persons (students) with common country."<<endl;
  std::cout<<termcolor::yellow<<"(e) Record of total students."<<endl;
  std::cout<<termcolor::yellow<<"(f) Exit"<<endl;
  std::cout<<termcolor::green<<"Enter your choice: ";
  std::cin>>ch;
 

switch(ch)
{
  case 1:
 add(student, st);
  break;

  case 2:
 update(student, st);
  break;

  case 3:
 delete_rec(student, st);
  break;

  case 4:
  std::cout<<termcolor::green<<"Enter choice: ";
  std::cin>>choice;
   switch (choice)
   {
   case 1:
   report_name(student, st);
    break;
  
   case 2:
   report_state(student, st);
   break;
   
   case 3:
   report_country(student, st);
   break;


   case 4: 
   running = false;
   std::cout<<termcolor::bright_white<<"Exiting the program."<<endl;
   break;

   
   default:
   std::cout<<termcolor::bright_magenta<<"Enter valid choice"<<endl;
    break;
   }
  break;
   case 5:
   show(student, st);
   break;
  case 6:
  running = false;
  std::cout<<termcolor::bright_white<<"Exiting the program."<<endl;
  break;

  case 7:
  default:
  std::cout<<termcolor::bright_magenta<<"Invalid Choice."<<endl;

}
}
  return 0;
}
