#include <stdio.h>

#define LINE_LENGTH 20
#define MAX_STRING_SIZE 500

int get_line(char line[]);
void process_line(char line[], int len);
void put_line(char line[]);

int main(void)
{
    char line[MAX_STRING_SIZE+1];
    int len;
    while ( len = get_line(line) )
    {
        process_line(line, len);
        put_line(line);
    }
    
    return 0;
}

int get_line(char line[])
{
    char c;
    int len = 0;
    while ( (c = getchar()) != '\n' && c != EOF && len < MAX_STRING_SIZE )
        line[len++] = c;
    if (c == '\n')
        line[len++] = c;
    line[len] = '\0';
    return len;
}

void process_line(char line[], int len)
{
    int last_non_blank_i = -1;
    int count = 0;
    for (size_t i = 0; i < len; i++)
    {
        count++;
        if (line[i] != ' ' && line[i] != '\t' && (line[i+1] == ' ' || line[i+1] == '\t'))
            last_non_blank_i = i;
        if (count == LINE_LENGTH && last_non_blank_i != -1)
        {
            line[last_non_blank_i+1] = '\n';
            last_non_blank_i = -1;
            count = 0;
        }
        if (count == LINE_LENGTH && last_non_blank_i == -1)
            count = 0;
    }
        
}

void put_line(char line[])
{
    int count = 0;
    int gg = 0;
    while (line[count] != '\0')
    {
        if (line[count] == '\n')
            gg = 0;
        if (gg == LINE_LENGTH)
            putchar('\n');
        putchar(line[count]);
        gg++;
        count++;
    }
    
}