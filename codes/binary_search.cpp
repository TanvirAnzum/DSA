#include <iostream>
#include <algorithm>

using namespace std;

int binary_srch(int arr[], int key, int s) {
    int start = 0;
    int end = s-1;
    int mid;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid]<key) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int binary_s_r(int arr[], int low, int high, int key)
{
    if(low>high) return -1;
    int m = low+high/2;
    if(arr[m] == key) return m;
    if(arr[m] < key) return binary_s_r(arr,m+1,high,key);
    else return binary_s_r(arr,low,m-1,key);

}

int main()
{
    int arr[11] = {2,3,45,67,88,102,1034,5234,343,6546,556};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;
    sort(arr, arr+11);

    for(int i=0;i<11;i++) cout<<arr[i]<<" ";
    cout<<binary_srch(arr,102,6)<<endl;
    cout<<binary_s_r(arr,0,5,2)<<endl;
}
