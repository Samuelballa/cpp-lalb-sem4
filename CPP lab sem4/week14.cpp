// week 14
#include <iostream>
#include <stack>
using namespace std;

int priority (char alpha){
    if(alpha == '+' || alpha =='-')
        return 1;
 
    if(alpha == '*' || alpha =='/')
        return 2;
 
    if(alpha == '^')
        return 3;

 
    return 0;
}
string convert(string infix)
{
    int i = 0;
    string postfix = "";
    
    stack <int>s;

    while(infix[i]!='\0')
    {
        
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
       
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        
        else if(infix[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else            
        {
            while (!s.empty() && priority(infix[i]) <= priority(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }


    
}

int main()
{
    string infix ,postfix;
    int ch;
    do 
    {
        cout<<" Enter an infix expression: ";
        cin >> infix;   
        postfix = convert(infix);
         cout << "\n Your Infix expression is: " << infix; 
        cout << "\n Postfix expression is: " << postfix;
        cout << "\n \t Do you want to enter infix expression (1/ 0)?";  
        cin >> ch;  
 
    } while(ch == 1);  
    return 0;  
}   
   