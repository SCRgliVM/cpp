#include <stdio.h>

main()
{   
    double nc;

    nc = 0;
    for ( ;getchar() != EOF; ++nc )
        ;
    printf("%.0f\n", nc);
}