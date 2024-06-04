#include<iostream>
using namespace std;
class hangman{


};
int main()
{
    int ch;
    bool running = true;
    cout<<"Hangman Game"<<endl;
    while(running){
    cout<<"Menu"<<endl;
    cout<<"1. Start Game."<<endl;
    cout<< "2. Resume Game."<<endl;
    cout<<"3. Exit "<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        break;

        case 2:
        break;

        case 3:
        running = false;
        cout<<"Exiting the game."<<endl;
        break;

        case 4:
        default:
        cout<<"Invalid Choice."<<endl;
        break;
    }
    }

}