// Recursion is not in there  right now
#include <iostream>

using namespace std;


void fibo(int f, int s, int n){
    if(n == 0)return;

    cout<<f<<", ";

    fibo(s, f + s, n - 1);

}
int main(int argc, char const *argv[])
{
    fibo(0,1, 20);
    return 0;
}