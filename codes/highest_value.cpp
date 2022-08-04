#include <stdio.h>
#include <limits.h>
int main()
{
    int n;  /// size of array
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN;
    ///printf("%d\n",max);
    scanf("%d",&arr[0]);
    if(arr[0] > max) max = arr[0];
    for(int i=1; i<n; i++)
    {
        scanf(", %d",&arr[i]);
        if(arr[i]>max) max = arr[i];
    }


    ///for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("Maximum value: %d\n",max);
    return 0;

}


/**
sample input:
5
5,9,6,45,67

1
24

6
34,3,2,12,4,31
**/
