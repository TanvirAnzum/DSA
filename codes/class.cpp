#include <iostream>

using namespace std;

class dog
{
public:
    string color, breed;
    int age;
    void barking()
    {
        cout<<"Dog barks."<<endl;
    }
};

int main()
{
    dog obj;
    obj.color = "Red";
    obj.breed = "German";
    obj.age = 13;
    obj.barking();
    cout<<obj.color<<" "<<obj.breed<<" "<<obj.age<<endl;

    return 0;
}
