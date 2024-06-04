#include<iostream>
#include<iomanip>
using namespace std;
void easy();
void medium();
void hard();
void startGame();
void startGame()
{
    bool running = true;
    int level;
    while(running){
    std::cout<<"Levels"<<endl;
    std::cout<<"1. Easy"<<endl;
   std:: cout<<"2. Medium"<<endl;
    std::cout<<"3. Hard"<<endl;
    std::cout<<"Enter level(1/2/3): ";
    cin>>level;
    switch(level)
    {
        case 1:
        easy();
        break;
        case 2:
        medium();
        break;
        case 3:
        hard();
        break;
        case 4:
        running = false;
        cout<<"Quit the quiz session!"<<endl;
        break;
        case 5:
        default:
        cout<<"Invalid choice!"<<endl;
        startGame();
        break;
    }
    }
}
void easy()
{
    int s,m,score =0;
    std::cout<<"What is the sum of 1 and 2?";
    std::cin>>s;
    if(s==3)
    {
        std::cout<<"correct"<<endl;
        score++;
    }
    else{
        std::cout<<"Incorrect"<<endl;
    }
    cout<<"What is the multiplication of 2 and 19? ";
    cin>>m;
    if(m==38)
    {
        cout<<"Correct! "<<endl;
        score++;
    }
   cout<< "Your score in level1 is "<<score<<endl;
}
void medium()
{
cout<<"hi"<<endl;
}
void hard()
{
std::cout<<"hello"<<endl;
}
void math()
{
    startGame();
   
}
void science()
{
    startGame();
}
void history()
{
    startGame();
}

int main()
{
int ch;
bool running = true;
while(running)
{
    std::cout<<"WELCOME TO QUIZ SESSION."<<endl;
    std::cout<<"Category:  "<<endl;
    std::cout<<"1. Math"<<endl;
    std::cout<<"2. Science"<<endl;
    std::cout<<"3. History"<<endl;
     std::cout<<"Which category you want to compete? "<<endl;
     cin>> ch;
     switch(ch)
     {
        case 1:
        math();
        break;

        case 2:
        science();
        break;

        case 3:
        history();
        break;
        
        case 4:
        running = false;
        std::cout<<"Quit the game!"<<endl;
        break;

        case 5:
        default:
        std::cout<<"Invalid choice!"<<endl;
        break;
     }
   }
   return 0;
}