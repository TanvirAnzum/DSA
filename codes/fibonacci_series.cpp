#include <iostream>

using namespace std;


///0 1 1 2 3 5 8 13


void fib(int n)
{
    int t1,t2,next;
    t1 = 0;
    t2 = 1;
    for(int i=0;i<n;i++) {
        if(i==0) {
          cout<<t1<<" ";
          continue;
        }
        if(i==1) {
          cout<<t2<<" ";
          continue;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        cout<<next<<" ";
    }
}

int fib_r(int n)
{
    if(n<=1) return n;

    return fib_r(n-1) + fib_r(n-2);
}

int main()
{
    fib(10);
    cout<<endl;
    for(int i=0;i<5;i++) cout<<fib_r(i)<<" ";
}
