#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=0,b=1,ob;
    cout<<a<<", "<<b;

    for (int i = 0; i <=20; i++)
    {
        cout<<","<<a+b;
        ob=b;
        b=a+b;
        a=ob;
    }
    
    return 0;
}
