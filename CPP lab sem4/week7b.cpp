#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char name;
    cout<<"Enter number:";
    cin>>a;
    cout<<"Enter ur name:";
    cin>>name;
    cout<<"Enter number:";
    cin>>b;
    try
    {
        if (a ==0){
            throw a;
        }
        if (name == 's'){
            throw name;
        }
        if (b=2.3){
            throw b;
        }
    }
    catch(...)
    {
        cout<<"exception raised";
    }
    return 0;
    
}
