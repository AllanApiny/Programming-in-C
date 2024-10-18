#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *textPtr;
    textPtr = "A character string.";
    for(;*textPtr!='\0';textPtr++)
        printf("%c",*textPtr);
    printf("\n%s",textPtr);

    return 0;
}
