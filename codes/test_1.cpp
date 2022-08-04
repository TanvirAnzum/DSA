#include <iostream>

using namespace std;

void full_name_void(string a,string b) {
        cout<<a+b<<endl;
    }

string full_name(string a,string b) {
        return a+b;
    }


int main()
{
    string first_name, last_name;
    int student_id;

    cin>>first_name>>last_name;

    full_name_void(first_name,last_name);

    string output = full_name(first_name,last_name);
    cout<<output<<endl;


    return 0;
}
