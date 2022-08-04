#include <iostream>

using namespace std;

int main()
{
    int max,max2;
    max = max2 = 0;
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++) {
        if(arr[i]>max) {
            max2= max;
            max = arr[i];
        }
        else if(arr[i]>max2) max2 = arr[i];
    }
    cout<<max<<" "<<max2<<endl;
    return 0;
}
