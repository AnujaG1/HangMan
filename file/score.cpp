#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<random>

using namespace std;
int main()
{ srand(time(NULL));
    ofstream hout("Game.txt");
    int score = 0;
    char ch;
    do
    {
     int a;
     
        int ran1 = rand()% 10;
        int ran2 = rand()% 10;
        cout<<ran1<<" + " <<ran2<<" = ";
        cin>>a;      
    if(a == (ran1+ran2))
    {
        cout<<"Correct answer! "<<endl;
        score++;
    } 
    else{
        cout<<"Incorrect Answer! "<<endl;

    }
        cout<<"Do you want to continue(y/n)?";
        cin>>ch; 
    } while(ch == 'y' || ch == 'Y');

    hout<<"Score is :"<<score<<endl;
    hout.close();

    ifstream hin("highScore.txt");
    int highScore = 0 ;
    if(hin.is_open()){
        hin>>highScore;
        hin.close();
    }
    if(score > highScore)
    {
        highScore = score;
        ofstream hout("highScore.txt");
        hout<<"Your high score is: "<<highScore<<endl;
        hout.close();
    }
    cout<<"Your score is: "<<score<<endl;
    cout<<"High Score is: "<<highScore<<endl;
    return 0;
}
