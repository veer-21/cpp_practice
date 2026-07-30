#include <iostream>
#include<math.h>
using namespace std;
void armst(int n);

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    armst(n);
    return 0;
}
void armst(int n)
{
    int y,sum=0,rem;
    y=n;
    while (n>0)
    {
        rem=n%10;

        sum += rem * rem * rem;

       
        n/=10;
    }


    if (y==sum)
    {
        cout<<"\nIt is an Armstrong number";
    }
    else
    {
        cout<<"\nIt is not an armstrong number";
    }
    

}