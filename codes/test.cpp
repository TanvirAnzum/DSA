#include <bits/stdc++.h>

using namespace std;


int main()
{
    int *p, **pp, ***ppp;
    int ac = 5;
    p = &ac;
    pp = &p;
    ppp = &pp;
    cout<<p<<" "<<*pp<<" "<<***ppp<<endl;
}
