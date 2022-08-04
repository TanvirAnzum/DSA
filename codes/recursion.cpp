#include <iostream>

using namespace std;

int sumdigit(int n)
{
    if(n==0) return 0;
    return (n%10 + sumdigit(n/10));
}

int con_dig(int n, int x)
{
    static int count = 0;
    count++;
    if(count>x) return 0;
    return (n + con_dig(n+1, x));
}

int fact(int n)
{
    if(n==0) return 1;
    return n * fact(n-1);
}

int main()
{
    int a = 1;

    cout<<sumdigit(a)<<endl;

    cout<<con_dig(a,5)<<endl;

    cout<<fact(5)<<endl;
}
