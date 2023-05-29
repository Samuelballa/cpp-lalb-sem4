#include <iostream>
using namespace std;

class Test2 ;

class Test1
{
    private: int a;
    public:
    void geta(){
        cout<<"enter A value";
        cin>> a;
    }
    friend void big(Test1,Test2);

};

class Test2
{
    private: int b;
    public:
    void getb(){
        cout<<"Enter B value";
        cin>>b;
    }
    friend void big(Test1,Test2);
};

void big(Test1 t1,Test2 t2)
{
    if(t1.a >t2.b)
    {
        cout<<"A is big";
    }
    else
    {
        cout<<"B is big";
    }
}

int main()
{
    Test1 t1;
    Test2 t2;
    t1.geta();
    t2.getb();
    big (t1,t2);
    return 0;
}