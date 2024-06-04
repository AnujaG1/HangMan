#include<iostream>
#include<string>
#include<vector>
#include<limits>
#include<iomanip>
#include<algorithm>
#include "termcolor.hpp"
using namespace std;
class TODO{
    private:
    string task;
    string date;

    public:
    TODO(string &task, string &date): task(task), date(date){}

    void print() const
    {        std::cout<<termcolor::white<<setw(40)<<task<<setw(20)<<date<<endl; }

    string getTask() const
    {    return task;   }
};
void addTask(vector<TODO> &todos)
{
  string task, date;
    std::cout<<termcolor::yellow<<"Enter task name: ";
      std::cin.ignore(); 
    getline(cin, task);
    std::cout<<termcolor::yellow<<"Enter due date: ";
    getline(cin,date);
    todos.emplace_back(task , date);
    std::cout<<termcolor::green<<"Task added successfully"<<endl;
}
void removeTask(vector<TODO> &todos)
{
    string tasks;
    std::cout<<termcolor::yellow<<"Enter task to be removed: ";
     std::cin.ignore();
    getline(cin , tasks);
    auto it = remove_if(todos.begin(), todos.end(),[&tasks](const TODO &work)
    {
        return work.getTask()==tasks;
    });
    if(it != todos.end()){
        todos.erase(it, todos.end());
        std::cout<<termcolor::green<<"Task "<<tasks<<" erased successfully."<<endl;
    }
    else
    {     std::cout<<termcolor::blue<<"Task "<<tasks<<" not found."<<endl; }
 }


void viewTask(vector<TODO> &todos)
{
   
    if(todos.empty())
    {    cout<<termcolor::blue<<"No any tasks to complete."<<endl;
        return ;
    }
     cout<<termcolor::yellow<<setw(50)<<" Task list"<<endl<<endl;
      std::cout<<termcolor::red<<setw(40)<<"Tasks Listed"<<setw(20)<<"Due Date"<<endl;
    for( const auto &i:todos)
    { 
       i.print();
    } 
}
int main()
{
   vector<TODO> todos;--
    int ch;
    bool running = true;
    cout<<termcolor::red<<"\t \t TO DO LIST OF ANUJA GYAWALI."<<endl;
    while(running)
    {
        cout<<termcolor::blue<<"Menu"<<endl;
        cout<<termcolor::bright_magenta<<"1. Add task"<<endl;
        cout<<termcolor::bright_magenta<<"2. Remove task"<<endl;
        cout<<termcolor::bright_magenta<<"3. View Task"<<endl;
        cout<<termcolor::bright_magenta<<"4. Exit"<<endl<<endl;
        cout<<"Enter choice: ";
        cin >> ch;
    switch(ch)
    {
      case 1:
      addTask(todos);
      break;
      case 2:
      removeTask(todos);
      break;

      case 3:
      viewTask(todos);
      break;

      case 4:
      running = false;
      std::cout<<termcolor::red<<"Exiting the program."<< endl;
      break;

      case 5:
      default:
      std::cout<<termcolor::red<<"Invalid Choice."<< endl;
      break;
    }
    }
    return 0;
}