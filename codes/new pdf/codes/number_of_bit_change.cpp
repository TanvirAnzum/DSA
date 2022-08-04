#include <iostream>

using namespace std;

int bit(int n)
{
    int count = 0;
    while(n!=0) {
        count += n & 1;
        n=n>>1;
    }
    return count;
}


int main()
{
    int a = 10, b = 20;
    ///01010, 10100

    cout<<bit(a^b)<<endl;

    return 0;

}
