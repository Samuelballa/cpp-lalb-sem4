#include <iostream>
using namespace std;
template<class t>
t sum (t a,t b)
{
    return a+b;

}
int main()
{
    cout<< "add int value :"<<sum(10,20)<<endl;
    cout<<"add float value : "<<sum(10.5,9.5)<<endl;
    return 0;
}