#include<iostream>
using namespace std;
int main()
{
    int i,j;
    const unsigned char WHITE = 219; //solid color (primes)
    const unsigned char GRAY = 176; //gray (non primes)
    unsigned char ch;              //for each screen position
    for(i=0;i<80*25-1;i++)
    {
        ch = GRAY;            
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                ch = WHITE;
                break;
            }
            
        }
        cout<<ch;
    }
    return 0;
}
