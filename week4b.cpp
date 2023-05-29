#include<iostream>
using namespace std;

class uninary
{
    private: int a,b,c;
    public : uninary(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        cout<<"\ta= "<<a<<"\tb="<<b<<"\tc="<<c<<endl ;

    }
    void operator ++()
    {
        a++;
        b++;
        c++;
        cout<<"\ta= "<<a<<"\tb="<<b<<"\tc="<<c<<endl ;
    }       
   
};

int main()
{
    uninary uninary(5,6,7);
    ++uninary;
    return 0;
}

