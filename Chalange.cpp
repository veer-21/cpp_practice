#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number:- "<<endl;
    cin>>n;
    int sum=0;
    for (int i = n; i >= 0; i--)
    {
        
        sum+=i;
    }
    cout<<"The sum is "<<sum;
    return 0;
}
