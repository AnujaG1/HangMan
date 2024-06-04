#include<iostream>
using namespace std;
int main()
{
    void copystr(char* , char*);
    char str1[20] , str2[20];
    cout<<"Enter str1: ";
    cin >> str1;
    copystr(str2, str1);
    cout<<str2<<endl;
    return 0;
}
void copystr(char *name, char *nam)
{
    while(*nam)
    {
        *name++ = *nam++;
    }
    *name = '\0';
}