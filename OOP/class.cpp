#include<iostream>
using namespace std;

class Hero 
{

private:
    int health;
    char level;

    public:
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
        health = h;
    }
    void setLevel(char l)
    {
        level = l;
    }
 
};
int main()
{
    Hero ram;
    ram.setHealth(70);
    ram.setLevel('A');

    cout<<"Health is : "<< ram.getHealth() <<endl;
    cout<<"Level is : "<< ram.getLevel() <<endl;
}