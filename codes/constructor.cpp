#include <iostream>

using namespace std;

class dog
{
private:
    string color, breed;
    int age;
public:
    dog(string c, string b, int a)
    {
        color = c;
        breed = b;
        age = a;
    }


    void getter()
    {
        cout<<"Breed: "<<breed<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

int main()
{
    dog obj("Red","German",13);
    obj.getter();



    return 0;
}
