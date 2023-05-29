#include <iostream>
using namespace std;

template <class t>
class sum{
    t a,b;
    public:
    void getab(){
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;
    }
    t add(){
        return a+b;
    }
};

int main()
{
    sum <int> ob1;
    sum <int> ob2;
    ob1.getab();
    ob2.getab();
    cout<<"add(a,b)"<<ob1.add()<<endl;
    cout<<"add(a,b)"<<ob2.add()<<endl;
    return 0;
}