#include <stdio.h>

#define ENTAB_BLANKS 1

void print_blanks_and_tabs(int);
void print_chars(char ,int);

int main()
{
    char c;
    int nob;

    nob = 0;
    while ( (c = getchar()) != EOF)
    {
        if ( c == ' ' )
            ++nob;
        else
        {
            if (nob > 0)
            {
                print_blanks_and_tabs(nob);
                nob = 0;                
            }
            putchar(c);
        }
    }
    if (nob > 0)
        print_blanks_and_tabs(nob);
    return 0;
}

void print_blanks_and_tabs(int n)
{
    if (n == 0)
        return;
    print_chars('\t',n / ENTAB_BLANKS);
    print_chars(' ' ,n % ENTAB_BLANKS);
}

void print_chars(char c,int n)
{
    for (size_t i = 0; i < n; i++)
        putchar(c);    
}