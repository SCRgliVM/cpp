#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

void fahrenheit_to_celsius_table(int lower, int upper, int step);

/* print Fahrenheit-Celsius table */
main()
{   
    fahrenheit_to_celsius_table(LOWER, UPPER, STEP);
    return 0;        
}

void fahrenheit_to_celsius_table(int lower, int upper, int step)
{
    int fahr;

    for ( fahr = lower; fahr <= upper; fahr = fahr + step )
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}