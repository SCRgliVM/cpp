#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char str[]);
size_t get_string_length(char str[]);
void swap_chars(char *x, char *y);

/* print longest input line */
int main()
{   
    int len;               /* currect line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */

    max = 0;
    while ( (len = getline(line, MAXLINE)) > 0 )
    {
        reverse(line);
        printf("Result: %s\n", line);
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void reverse(char str[])
{
    size_t length        = get_string_length(str);
    size_t string_middle = length / 2;
    size_t string_end    = length - 1;

    char temp;
    for (size_t i = 0; i < string_middle; i++)
        swap_chars(&str[i],&str[string_end-i]);    
}

size_t get_string_length(char str[])
{
    size_t length = 0;
    while (str[length])
        ++length;
    return length;
}

void swap_chars(char *x, char *y)
{
    char temp;

    temp = *x;
    *x = *y;
    *y = temp;
}