#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n==0) return 1;

    return n * factorial(n-1);
        ///120

}


int main()
{
    int n, mul;
    cin>>n;
    cout<<factorial(n)<<endl;
    mul = 1;
    for(int i=1;i<=n;i++) {
        mul = mul * i;
    }
    cout<<mul<<endl;
}


