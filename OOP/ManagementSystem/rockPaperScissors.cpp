#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
#include "termcolor.hpp"

using namespace std;
int main()
{
    string data[] = {"Rock", "Paper", "Scissor"};
    int guess;
    char ch;
      srand(time(NULL));
    do {
    int n = rand() % 3 ;
   std::cout<<setw(30)<<termcolor::bright_magenta<<"Rock Paper Scissor Game! "<<endl;
    std::cout<<termcolor::blue<<"Your Guess "<<termcolor::white<<"(1 for Rock, 2 for Paper , 3 for Scissor ) :";
    cin>>guess;
    if(guess>3)
    {
        continue;
    }

    std::cout<<termcolor::blue<<"Computer's Choice : "<<termcolor::white<<data[n]<<endl;
    std::cout<<termcolor::blue<<"Your's Choice : "<<termcolor::white<<data[guess-1]<<endl;
    if(n == guess-1)
    {
        std::cout<<"It's a tie."<<endl;
    }
    else if( (n == 0 && guess == 3 ) || 
             (n == 1 && guess  ==  1) ||
             (n == 2 && guess == 2) )
             {
             std::cout<<termcolor::red<<"You Loose!"<<endl; 
             }
    else{
        std::cout<<termcolor::red<<"You Win! "<<endl;
   
        break;
        }

    std::cout<<setw(20)<<termcolor::yellow<<"Do you want to continue (y/n)? ";
    std::cin>>ch;
    }while(ch != 'n');
    return 0;
}