#include<iostream>
using namespace std;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

enum Suit {hearts, spades, clubs, diamonds};
struct Card
{
    int num;
    Suit suit;
};
void star();
int main()

{

    Card temp, chosen, prize;
    int position;
    Card card1 = {9, spades};
    cout<<"Card1 is the nine of spades."<<endl;
    Card card2 = {3, hearts};
    cout<<"Card2 is the third of hearts."<<endl;
    Card card3 = {14, spades};
    cout<<"Card3 is the ace of spades."<<endl;
    prize = card3;
     star();
     cout<<endl;
    cout<<"I am swapping card1 and card2."<<endl;
    temp = card1;
    card1 = card2;
    card2 = temp;
   star();
   cout<<endl;
    cout<<"I am swapping card2 and card3."<<endl;
    temp = card2;
    card2 = card3;
    card3 = temp;
star();
cout<<endl;
    cout<<"I am swapping card3 and card1."<<endl;
    temp = card3;
    card3 = card1;
    card1 = temp;
star();cout<<endl;

    cout<<"Where is the ace of spades (1, 2, 3)? "<<endl;
    cin>>position;
    switch(position)
    {
        case 1 : chosen = card1; break;
        case 2 : chosen = card2; break;
        case 3 : chosen = card3; break;
    }
    star();
    cout<<endl;
    if(chosen.num == prize.num && chosen.suit == prize.suit)
    {
        cout<<"You won! "<<endl;
    }
    else{
        cout<<"You loose! "<<endl;
    }
    return 0;
}

void star()
{
    int i;
    for(i=0;i<100;i++)
    {
        cout<<"*";
    }
}