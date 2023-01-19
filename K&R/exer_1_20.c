#include <stdio.h>

#define DETAB_BLANKS 4

int main()
{
    char c;

    while ( (c = getchar()) != EOF)
        if (c == '\t')
            for (size_t i = 0; i < DETAB_BLANKS; i++)
                putchar(' ');
        else
            putchar(c);
    
    return 0;
}