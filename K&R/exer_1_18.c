#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void remove_trailing_whitespaces(char line[]);

/* print longest input line */
int main()
{   
    int len;               /* currect line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */

    max = 0;
    while ( (len = getline(line, MAXLINE)) > 0 )
    {
        remove_trailing_whitespaces(line);
        if (line[0] != '\0')
            printf("%s\n", line);
    }
    return 0;        
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;    
}

void remove_trailing_whitespaces(char line[])
{
    size_t line_length;
    for ( line_length = 0; line[line_length] != '\n' ; line_length++)
        ;

    size_t end;
    for ( end = line_length-1; end>=0 && (line[end] == ' ' || line[end] == '\t'); --end)
        ;
    line[end+1] = '\0';
}