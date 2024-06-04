#include<iostream>
#include<random>
using namespace std;
int main()
{
int n;
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<>distr(1,100);
uniform_real_distribution<>aaa(1,10);
for(n = 0;n<10;n++)
{
    std::cout<<distr(gen)<<' ';
}
std::cout<<endl;

for(n=0;n<10;n++)
{
    std::cout<<aaa(gen)<< " ";

}
cout<<endl;
return 0;
}