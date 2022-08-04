#include <stdio.h>


int main()
{
    unsigned int res;
    res = (64>>(2+1-2)) & (~(1<<2));
    printf("%u\n", res);

    int arr[4] = {1,2,3,4};

    printf("%u %u %u",arr+1,&arr[1],&arr+1);
}
