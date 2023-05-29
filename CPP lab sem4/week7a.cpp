#include <iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter a & b values";
    cin>>a;
    cin>>b;
    int c =a-b;
    try{
        if(c!=0){
            cout<<"no exception";
        }
        else{
            throw(c);
        }
        cout<<a/c;
    }
    catch(int i){
        cout<<"divide by zero error";
    }
    return 0;

}