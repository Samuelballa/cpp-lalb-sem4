#include <iostream>
using namespace std;

class Operation{
    int a,b,add,sub,mul;
    float div;

    public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void Operation :: get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}

inline void Operation :: sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << a + b << "\n";
}

inline void Operation :: difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}

inline void Operation ::product()
{
    mul = a * b;
    cout << "Product of two numbers: " << a * b << "\n";
}

inline void Operation :: division()
{
    div =a/b;
    cout<<"Product of two numbers: "<<a*b<<endl;
}

int main()
{
    cout<<"Program using inline funstin \n";
    Operation p1;
    p1.get();
    p1.sum();
    p1.difference();
    p1.product();
    p1.division();
    return 0;
}