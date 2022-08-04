#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    ///char str[30];
    ///str = "ami tomake chai, tumi ki ta janona ki!!!";
    ///gets(str);

    string str2,str3;
    getline(cin,str2);

    for(int i=0;i<str2.size();i++) {
        if(str2[i] == ' ') continue;
        str3.push_back(str2[i]);
    }
    cout<<str2<<endl<<str3;
}
