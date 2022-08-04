#include <iostream>

using namespace std;

void merge(int arr[], int p, int q, int r)
{
    /// create L <- A[p...q] and M <- A[q+1...r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for(int i=0; i<n1; i++) L[i] = arr[p + i];
    for(int j=0; j<n2; j++) M[j] = arr[q + 1 + j];

    ///duplicate copies of sub arrays have been created

    int i,j,k;
    i = 0;
    j = 0;
    k = p;

    while(i<n1 && j<n2)
    {
        if(L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}




void mergeSort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q;
        q = (p+(r-1))/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}



int main()
{
    int arr[10] = {10,34,66,1,2,5,5,12,32,11};
    mergeSort(arr,0,9);
    for(int i=0; i<10; i++) cout<<arr[i]<<" ";
}
