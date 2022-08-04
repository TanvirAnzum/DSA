#include <iostream>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int res = 0;
    bool flag = false;
    for(int i=1; i<n; i++)
    {
        int count = 1;

        ///increasing sequence
        int j = i;
        while(j<n && arr[j]>arr[j-1])
        {
            j++;
            count++;

        }
        ///decreasing sequence
        while(i!=j && j<n && arr[j]<arr[j-1])
        {
            j++;
            count++;
            flag = true;
        }

        if(i!=j && count>2 && flag) {
            res = max(res,count);
            j--;
        }
        i = j;
    }
    cout<<res<<endl;
}
