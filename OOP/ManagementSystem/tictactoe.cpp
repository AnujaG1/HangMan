#include<iostream>
using namespace std;
char space[3][3] ={ {'1' ,'2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
string n1, n2;
char token = 'X';
int row, column;
bool gameTie = false ;

void functionOne()
{
    cout<<"    |    |    "<<endl;
    cout<<" "<<space[0][0]<<"  |  "<<space[0][1]<<" |  " <<space[0][2]<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<space[1][0]<<"  |  "<<space[1][1]<<" |  "<<space[1][2]<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<space[2][0]<<"  |  "<<space[2][1]<<" |  "<<space[2][2]<<endl;
    cout<<"    |    |    "<<endl;  
    cout<<endl;

}
void functionTwo()
{ 
   int digit;

 if(token =='X')
 {
    cout<<n1<<" Please Enter, it's your turn : ";
    cin>>digit;
 }
 
 if(token == 'O')
 {
    cout<<n2<<" PLease Enter, it;s your turn : ";
    cin>>digit;
 }
  if (digit == 1) { row = 0; column = 0; }
    else if (digit == 2) { row = 0; column = 1; }
    else if (digit == 3) { row = 0; column = 2; }
    else if (digit == 4) { row = 1; column = 0; }
    else if (digit == 5) { row = 1; column = 1; }
    else if (digit == 6) { row = 1; column = 2; }
    else if (digit == 7) { row = 2; column = 0; }
    else if (digit == 8) { row = 2; column = 1; }
    else if (digit == 9) { row = 2; column = 2; }
    else {
    cout<<"Invalid !!!"<<endl;
    }
 if(space[row][column] !='X' && space[row][column] != 'O')
 {
    space[row][column] = token;
    token=(token == 'X')? 'O':'X';
 }
 else{
    cout<<"There is no empty space!"<<endl;
    functionTwo();
 }
 
}

bool functionThree()
{
    for(int i=0;i<3;i++)
    {
        if(space[i][0] == space[i][1] && space[i][0]==space[i][2] )
        {
         return true;
        }
        if (space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {
            return true;
        }
        if(space[0][0] == space[1][1] && space[1][1] == space[2][2]){
         return true;
        } 
        if(space[0][2]==space[1][1] && space[1][1]==space[2][0])
        {
            return true;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j] != 'X' && space[i][j] != 'O')
            {
                return false;
            }
        }
    }
    gameTie = true;
    return false;
}

int main()
{
   cout<<"Enter the name of the first player:\n";
    getline(cin,n1);
    cout<<"Enter the name of the second player:\n";
    getline(cin,n2);
    cout<<n1<<" is player1 so he/she will play first\n";
    cout<<n2<<" is player2 so he/she will play second\n";
    while(!functionThree())
    {
   functionOne();
    functionTwo();
   
    }
    functionOne();
  if (!gameTie)
    {
        if (token == 'O') // The last token that played was 'X'
        {
            cout << n1 << " Wins!!" << endl;
        }
        else // The last token that played was 'O'
        {
            cout << n2 << " Wins!!" << endl;
        }
    }
    else
    {
        cout << "It's a draw!" << endl;
    }
    
    return 0;
}