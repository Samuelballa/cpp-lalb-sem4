#include <iostream>
using namespace std;

class Sample 
{
    private: int a,b;
    public:
    friend void Funone(Sample);
};

void Funone(Sample obj)
{
    obj.a=14;
    obj.b=63;
    cout<<obj.a<<endl<<obj.b<<endl;
}

int main()
{
    Sample S;
    Funone(S);
    return 0;
}