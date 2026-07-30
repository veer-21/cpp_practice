#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int fact=1;
    cout<<"Enter a number:- "<<endl;
    cin>>a;
    while (a>1)
    {
        fact*=a;
        a--;

    }
    cout<<"Factorial is:- "<<fact;
    
    return 0;
}
