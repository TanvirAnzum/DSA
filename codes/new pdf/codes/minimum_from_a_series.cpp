#include <iostream>

using namespace std;

int main()
{
    int number_of_elements;
    cout<<"Please enter the number of elements: ";
    cin>>number_of_elements;
    int arr[number_of_elements];
    cout<<"Please enter the series: ";
    for(int i=0;i<number_of_elements;i++) {
        cin>>arr[i];
    }

    int min = arr[0]; /// 4 1 5 2 1
    for(int i=1;i<number_of_elements;i++) {
        if(min>arr[i]) {
            min = arr[i];
        }
    }

    cout<<min<<endl;

    return 0;
}
