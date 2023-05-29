#include <iostream>
using namespace std;


// resource // https://www.programiz.com/cpp-programming/constructors
class wall{
    private: 
        int length;
        int height;
    public:
        wall(){                                 //default constructor
            length=5;
            cout<<"creating a wall1."<<endl;
            cout<<"length= "<<length<<endl;
        }
        wall(int len,int ht){                   //parameter constructor
            length= len;
            height=ht;
        }
        int area(){
            return length*height;
        }

        wall(wall &obj){                        //copy constructor
            length=obj.length;
            height=obj.height;
        }
        ~wall(){                                //destructur
            cout<<"destructor executed."<endl;
        }
};

int main(){
    wall wall_obj;
    wall wall_obj2(10,20);
    cout<<"area of wall2: "<<wall_obj2.area()<<endl;


    return 0;
}