#include <iostream>
#include <math.h>

using namespace std;

int digit(int n)
{
    int count = 0;
    while(n!=0) {
        n = n/10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int power = digit(n);
    cout<<power<<endl;
    int sum = 0;
    int x = n;
    while(x!=0) {
        sum = sum + pow(x%10,power);
        x= x/10;
    }
    if(sum==n) cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;

    return 0;
}
