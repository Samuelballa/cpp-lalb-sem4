// week 11
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cout<<"enter a number: ";
        cin>>x;
        s.push(x);
    }
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}