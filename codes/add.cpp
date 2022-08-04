#include <iostream>

using namespace std;

int add(int x,int y);


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}

int add(int x,int y)
{
    return x+y;
}
