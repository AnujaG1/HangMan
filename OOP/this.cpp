#include<iostream>
using namespace std;
class Hero {
    private:
    int health;
    char level;
    public:

    // Hero()            //default constructor
    // {
    //     cout<<"Good Bye anuja! "<<endl;
    // }

    // //parameterised constructor
    // Hero(int health)
    // {
    //     this->health = health;
    //     cout<<"hi anuja"<<endl;
    // }

    
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor
    Hero(Hero& temp)
    {
        cout<<"copy constructor called."<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print(){
        cout<<"hello"<<endl;
        cout<<"Health is "<<this->health<<endl;
        cout<<"Level is "<<this->level<<endl;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health =h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    // cout<<"hello anuja"<<endl;
    Hero S(7,'C');
    S.print();
    
    // copy constructor
    Hero R(S);
    R.print();
    // Hero ram(20, 'A');

    // ram.setLevel('A');
    // ram.setHealth(20);
    // cout<<"level is : "<<ram.getLevel()<<endl;
    // cout<<"Health is : "<<ram.getHealth()<<endl;
    return 0;
}