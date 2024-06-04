#include<iostream>

using namespace std;
int main()
{
    int x=6,y=6;
    char dir = 'a';
    cout<<"continue game until enter is pressed: "<<endl;
    cin>>dir;
    while(dir!='\r')
    {
        cout<<"your location is  x and y : "<<x <<","<<y<<endl;
    
        cout<<"enter variable n,s,e,w : "<<endl;
        dir = getchar();
        if(dir=='n')
        {
             x++;
        }
        else if(dir=='s')
         {
            x--;
        }
        else if(dir=='e')
        {
            y++;
        }
        else if(dir=='w'){
            y--;
        }
        else{
            cout<<"default input...";
        }
    }
    return 0;
}