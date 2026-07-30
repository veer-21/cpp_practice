#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter Number n:-";
    cin>>n;
    int count=0;
    while (n>0)
    {
        count++;
        n/=10;
    }
    cout<<"The Digits are "<<count;
    return 0;
}
