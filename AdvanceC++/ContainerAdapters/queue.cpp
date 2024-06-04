#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Anuja");
    q.push("mahesh");
    q.push("sita");
    q.push("krishna");
    q.push("tulsiram");

    cout<<"front element before pop: "<<q.front()<<endl;
    cout<<"Size befor pop: "<<q.size()<<endl;
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;
    cout<<"Size after pop: "<<q.size()<<endl;
    return 0;
}