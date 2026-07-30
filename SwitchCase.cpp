#include <iostream>
#include <stdio.h>


using namespace std;
int main(int argc, char const *argv[])
{
    char oper;
    float a,b;
    int  i=1;
    MyLoops:
    cout<<"Enter the expression:- "<<endl;
    scanf("%f%c%f", &a, &oper, &b);
    
    switch (oper)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '%':
        cout<<(int)a%(int)b<<endl;
        break;
    
    default:
        cout<<"Invalid";
        break;
    }
    while (i==1)
    {
    goto MyLoops;

    }
    
    
    return 0;
}
