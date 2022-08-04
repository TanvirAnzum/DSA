#include <iostream>


using namespace std;


bool isPalr(string str,int s,int e)
{
    if(s==e) return true;

    if(str[s] != str[e]) return false;

    if(s<e+1) return (str,s+1,e-1);
}


bool isPal(string str,int s,int e)
{
    while(s<e)
    {
       if(str[s] != str[e]) return false;
       s++;
       e--;
    }
    return true;
}

int main()
{
    string str = "PAPAP";
    cout<<isPal(str,0,str.size()-1);
}
