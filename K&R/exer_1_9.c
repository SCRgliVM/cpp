#include <stdio.h>

int main()
{   
    int c;

    c = getchar();
    while ( c != EOF )
    {
        putchar(c);
        if ( c == ' ' )
            while (c == ' ')
                c = getchar();
        else
            c = getchar();
    }
}
