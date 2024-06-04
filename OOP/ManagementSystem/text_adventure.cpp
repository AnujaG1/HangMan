#include <SFML/Graphics.hpp>
#include <iostream>
#include<iomanip>
#include <string>
#include "termcolor.hpp"

using namespace std;
void sun()
{
    cout<<termcolor::green<<setw(5)<<"Hurry Up! You have to complete the lab report of DL!"<<endl;
    cout<<termcolor::green<<setw(5)<<"Such an interesting lab! You will really enjoy it!"<<endl;
}
void mon()
{
    cout<<termcolor::green<<setw(5)<<"It's a hectic day. The class starts at 10:15 AM and ends at 4:05 PM with all lectures period"<<endl;
    cout<<termcolor::green<<setw(5)<<"Be Sure to carry your water bootle!"<<endl;
    cout<<termcolor::green<<setw(5)<<"I know you gonna take a nap in all periods"<<endl;
}
void tue()
{
    cout<<termcolor::green<<setw(5)<<"Oh My Gosh ! I know you did not sleep last night."<<endl;
    cout<<termcolor::green<<setw(5)<<"You have EDC lab today!"<<endl;
    cout<<termcolor::green<<setw(5)<<"I know today also you will be hearing a discussion on Electronics Project!"<<endl;
}
void wed()
{
    cout<<termcolor::green<<setw(5)<<"It won't get wrong if i tell you this is the AUTOSET day!"<<endl;
    cout<<termcolor::green<<setw(5)<<"You got it nah it's ECT lab today!"<<endl;
    cout<<termcolor::green<<setw(5)<<"Be ready to act like you understand the all circuits and create data of your own."<<endl;
}
void thur()
{
    cout<<termcolor::green<<setw(5)<<"Hey you, Have you completed your lab report of OOP !"<<endl;
    cout<<termcolor::green<<setw(5)<<"Do it! Otherwise you gonna sit in lab until you got the output of all problems! "<<endl;
}
void fri()
{
    cout<<termcolor::green<<setw(5)<<"It might be a boring day to you! "<<endl;
    cout<<termcolor::green<<setw(5)<<"You got all the lectures today!"<<endl;
}
void sat()
{
    cout<<termcolor::green<<setw(5)<<"Finally your waiting of the weeks get over! "<<endl;
    cout<<termcolor::green<<setw(5)<<"Enjoy the day!"<<endl;
}

    int main()

    {
        string name;
        int ch;
        char sec;
        bool running = true;
        cout<<termcolor::bright_magenta<<setw(20)<<"WELCOME TO THE WEEKLY LAB SCHEDULE OF THIRD SEMESTER OF BCT."<<endl;
        cout<<termcolor::white<<"Enter Student's Name: ";
        getline(cin,name);
        cout<<termcolor::white<<"Enter Section: ";
        cin>>sec;
        while(running)
        {
            cout<<termcolor::bright_yellow<<setw(25)<<"SCHEDULE OF BCT GROUP A IN A WEEK"<<endl;
            cout<<endl;
            cout<<termcolor::bright_magenta<<"Weeks"<<endl<<endl;
            cout<<termcolor::bright_magenta<<"SUNDAY"<<endl;
            cout<<termcolor::bright_magenta<<"MONDAY"<<endl;
            cout<<termcolor::bright_magenta<<"TUESDAY"<<endl;
            cout<<termcolor::bright_magenta<<"WEDNESDAY"<<endl;
            cout<<termcolor::bright_magenta<<"THURSDAY"<<endl;
            cout<<termcolor::bright_magenta<<"FRIDAY"<<endl;
            cout<<termcolor::bright_magenta<<"SATURDAY"<<endl;
            cout<<termcolor::white<<"Routine of day(1/2..../9)? ";
            cin>>ch;
            cout<<endl;
            switch(ch)
            {
                case 1:
                sun();
                break;

                case 2:
                mon();
                break;

                case 3:
                tue();
                break;

                case 4:
                wed();
                break;

                case 5:
                thur();
                break;

                case 6:
                fri();
                break;

                case 7:
                sat();
                break;

                case 8:
                running = false;
                cout<<termcolor::red<<"Exit the schedule! "<< endl;
                break;

                case 9:
                default:
                cout<<termcolor::red<<"Invalid choice"<<endl;
                break;
            }
        }

        return 0;
    }

