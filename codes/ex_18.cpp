#include <stdio.h>

int main()
{
    char c = 121;
    int cnt = 0;
    do {
        printf("%d ",c);
        cnt++;
    }
    while(c++);

    printf("%d\n",cnt);
    return 0;
}
