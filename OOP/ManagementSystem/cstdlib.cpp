#include<iostream>
#include<cstdlib>
#include <string>
#include "termcolor.hpp"
#include<iomanip>
using namespace std;
int main()
{
    string name;
    int randNum , guessNum;
    int live =0;
    int score =0;
    srand(time(NULL));
    randNum = rand() % 10 +1;
    cout<<termcolor::blue<<"Enter player name: ";
    getline(cin, name);
   cout<<setw(20)<<termcolor::bright_magenta<<" Welcome to the Guessing Game Challenge! "<<endl;
    while(live!=5){
        std::cout<<termcolor::bright_magenta<<"Guess Number: ";
        std::cin>>guessNum;
        if(guessNum>randNum)
        {
            std::cout<<termcolor::red<<"That's too high!"<<endl;
        }
        else if(guessNum<randNum)
        {
            std::cout<<termcolor::red<<"That's too low!"<<endl;
        }
        else{
            std::cout<<termcolor::bright_green<<"You Guessed the correct number!"<<endl;
            score= score+1;
            break;
        }
       
        live++;
       
    }
 if(score!=1)
 { 
  std::cout<<termcolor::bright_red<<"you lost"<<endl;
 }
    std::cout<<termcolor::bright_yellow<<"The correct number is: "<<randNum<<endl;
  

}