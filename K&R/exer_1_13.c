#include <stdio.h>

#define NUMBER_OF_VARIOUS_WORD_LENGTS 3
#define IN  1
#define OUT 0

/* draw a horizontal histogram of the length of words in its input  */
int main()
{
    int character;
    int words_lengths[NUMBER_OF_VARIOUS_WORD_LENGTS];
    int word_length = 0;
    int state = OUT;

    for (int i = 0; i < NUMBER_OF_VARIOUS_WORD_LENGTS; i++)
        words_lengths[i] = 0;

    while ( (character = getchar()) != EOF )
    {
        if ( character == ' ' || character == '\t' || character == '\n' )
            state = OUT;
        else
            state = IN;
        
        if (state == IN)
            ++word_length;
        else
        {
            #define SHORT 0
            #define AVERAGE 1
            #define LONG 2
            if (word_length > 0)
            {
                if (word_length < 5)
                    ++words_lengths[SHORT];
                else if (word_length < 10)
                    ++words_lengths[AVERAGE];
                else
                    ++words_lengths[LONG];
                word_length = 0;
            }
        }
    }

    int word_number = 0;
    for (int i = 0; i < NUMBER_OF_VARIOUS_WORD_LENGTS; i++)
        word_number += words_lengths[i];

    /*for (int i = 0; i < NUMBER_OF_VARIOUS_WORD_LENGTS; i++)
    {
        printf(" %d", words_lengths[i]);
    }*/
    

    char *headers[3] = {"Words < 5 :", "Words < 10:", "Words > 10:"};
    for (int i = 0; i < NUMBER_OF_VARIOUS_WORD_LENGTS; i++)
    {
        float prop = 10*((float)words_lengths[i] / (float)word_number);
        printf(headers[i]);
        for (int j = 0; j < prop; j++)
            putchar('+');
        printf("\n");
    }
}
