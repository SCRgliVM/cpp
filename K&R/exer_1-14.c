#include <stdio.h>

#define NUMBER_OF_CHARACTERS 95

void init_array(int *ptr, int size);
void process_input(int *characters_frequencies);
void draw_histogram(int *characters_frequencies);

int main(void)
{
    int characters_frequencies[NUMBER_OF_CHARACTERS];

    init_array(characters_frequencies, NUMBER_OF_CHARACTERS);
    process_input(characters_frequencies);
    draw_histogram(characters_frequencies);

    return 0;
}

void init_array(int *ptr, int size)
{
    for (size_t i = 0; i < size; i++)
        ptr[i] = 0;    
}

void process_input(int *characters_frequencies)
{
    int c;
    while ( ( c = getchar() ) != EOF)
        if ( c >= ' ' && c <= '~' )
            ++characters_frequencies[c-' '];
}

void draw_histogram(int *characters_frequencies)
{
    printf("Histogram\n---------\n");
    for (size_t i = 0; i < NUMBER_OF_CHARACTERS; i++)
        if (characters_frequencies[i] > 0)
        {
            printf("%c|", i+' ');
            for (size_t j = 0; j < characters_frequencies[i]; j++)
                putchar('#');
            putchar('\n');            
        }
}