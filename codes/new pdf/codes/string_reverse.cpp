#include <iostream>
#include <string>

using namespace std;

string rev(string s)
{
    int len = s.length();
    char n[len];
    int index = 0;
    while(len>=0) {
        len--;
        n[index] = s[len];
        index++;
    }
    return n;
}

int main()
{
    string x = "APPLE";
    cout<<rev(x)<<endl;
    return 0;
}
