#include<iostream>
#include<vector>
#include<limits>
#include "termcolor.hpp"
using namespace std;
class Game{
    private:

};
void start()
{
    cout<<"Hello"<<endl;
}
int main()
{
    int ch;
    bool running = true;
    while(running)
    {
        cout<<"Menu"<<endl;
        cout<<"1. Start Game"<<endl;
        cout<<"2. Resume Game"<<endl;
        cout<<"3. Exit Game"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            start();
            break;

            case 2:
            break;

            case 3:
            running = false;
            cout<<"Exiting the program."<<endl;
            break;

            case 4:
            default:
            cout<<"Invalid Choice. Prompt Again."<<endl;
            break;

        }
    }
    return 0;
}