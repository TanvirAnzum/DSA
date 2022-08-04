#include <iostream>

using namespace std;

bool perfect(int n)
{
    int sum = 0;
    for(int i=1;i<n-1;i++) {
        if(n%i==0) sum = sum + i;
    }
    if(sum==n) return true;
    else return false;
}


int main()
{
    cout<<perfect(28)<<endl;
}
