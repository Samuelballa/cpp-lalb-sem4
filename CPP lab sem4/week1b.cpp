#include<iostream>
using namespace std;

void swap_int(int &x, int &y)
{
    int temp= x;
    x=y;
    y=temp;
}

void swap_float(float &a, float &b)
{
    float temp=a;
    a=b;
    b=temp;
}

int main(){
    float c, d;
    int a, b;
    cout<<"enter a & b: (in int)";
    
    cin>>a;
    cin>>b;
    
    cout<<"enter a & b: (in float)";
    cin>>c;
    cin>>d;
    cout<<"before swaping integers are a= "<<a<<" b= "<<b<<endl;
    swap_int(a,b);
    cout<<"after swaping integers are a= "<<a<<" b= "<<b<<"\n\n";
    cout<<"before swaping float are a= "<<c<<" b= "<<d<<endl;
    swap_float(c,d);
    cout<<"after swaping float are a= "<<c<<" b= "<<d<<endl;
    return 0;
}