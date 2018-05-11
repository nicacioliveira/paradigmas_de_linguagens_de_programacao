#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * invert( char * s ) {
    int length = strlen(s) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}



int main( void )
{
    char *str;
    scanf("%m[^\n]", &str);

    printf("%s\n", invert(str) );
    free(str);

    return 0;
}