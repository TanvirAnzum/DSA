#include <stdio.h>

int _x_(int,...);
int main()
{
    char (*p)(int,...)=&_x_;
    for(;(*p) (0,1,2,3,4); ) printf("%d", !+2);

    return 0;
}

char _x_(int a,...) {
    static int i=-1;
    return i+++a;
}
