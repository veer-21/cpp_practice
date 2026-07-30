#include <iostream>
using namespace std;
void palim(int n);
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter a number:-";
    cin>>n;
    palim(n);
    return 0;
}
void palim(int n)
{
    int i=1,rem,rev=0,y;
    y=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<rev;

    if(rev==y)
    {
        cout<<"\nIt is a Palimdome number.";
    }
    else{
        cout<<"\nIt is not a Palimdrome number.";
    }
}