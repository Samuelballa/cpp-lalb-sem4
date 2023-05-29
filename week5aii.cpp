#include <iostream>
using namespace std;

inline int cube(int s) { return s * s * s; }

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
	cout << "The cube of 3 is: " << cube(num) <<endl;
	return 0;
}
