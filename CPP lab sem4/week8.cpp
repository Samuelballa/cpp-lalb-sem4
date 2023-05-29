// User defined exception

#include <iostream>
#include<exception>
using namespace std;

class errors: public exception{
    public: 
        const char* what() const throw(){
            return "error is coming\n" ;
        }
};

int main(){
    int a;
    cout<<"enter a number";
    cin >> a;
    a *= a;
    try{
        if(a >= 25)
          throw errors();
        else 
           cout << a << endl;
    }
    catch(errors& e){
        cout << e.what() <<endl;
    }
}