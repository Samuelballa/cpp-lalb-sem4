#include<iostream>
using namespace std; 

class ops{
    public:
        int a,b;

        int add(){
            return a+b;
        }
        int mul(){
            return a*b;
        }

};
int main(){
    ops obj;
    cout<<"enter a and b: ";
    cin>> obj.a>>obj.b;
    cout<<"addition of a and b:"<<obj.add()<endl;
    cout<<"multipicaltion of a and b: "<<obj.mul();
    return 0;
}