#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ChangeCaseAndReverse(char *s)
{
    int len = strlen(s);
    char str[len+1];
    int i;
    for(i=0;i<len;i++) {
        if(isupper(s[i])) {
            str[len-i-1] = tolower(s[i]);
        }
        else str[len-i-1] = toupper(s[i]);
    }
    printf("%s\n",str);

}


int main()
{
    char string[]="Hello There";
    ChangeCaseAndReverse(string);
}
