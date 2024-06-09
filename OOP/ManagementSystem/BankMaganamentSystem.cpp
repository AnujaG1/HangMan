#include<iostream>
using namespace std;

class BankAccount {
public:
string AccountNum;
string AccountHolderName;
string AccountType;
float AccountBal;

BankAccount(const string& accNum, const string& aHN, const string& accType, const float& accBal) : AccountNum(accNum), AccountHolderName(aHN),AccountType(accType), AccountBal(accBal) {}

};
int main()
{
    bool running = true;
    cout<<"Bank Management System!"<<endl;
    while(running)
    {
        cout<<"Menu:"<<endl;
        cout<<"1. Bank Account"<<endl;
        cout<<"2. Savings Account"<<endl;
        cout<<"3. Checking Account"<<endl;
        cout<<"4. Exit"<<endl;
    }
}