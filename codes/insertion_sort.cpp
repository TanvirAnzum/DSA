#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int index = i;
        int value = arr[i];
        while(index>0 && arr[index-1]>value) {
            arr[index] = arr[index-1];
            index--;
        }
        arr[index] = value;
    }
}


int main()
{
    int arr[5] = {4,2,1,7,3};
    insertion_sort(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
