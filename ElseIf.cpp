#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    if (a==b)
    {
        cout<<"The numbers are equal";
    }else if (a<b)
    {
        
        cout<<"The number A is smaller than B";
    }else if (a>=b)
    {
        cout<<"The number A is Grater than B";
        
    }else
    {
        cout<<"The number A is not equal to B";
        
    }
    
    
    
    return 0;
}
