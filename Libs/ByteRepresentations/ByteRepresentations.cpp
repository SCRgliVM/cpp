#include <stdio.h>

#include "ByteRepresentations.h"

void show_bytes(byte_pointer pointer, size_t length){
    for (size_t i = 0; i < length; i++)
    {
        printf("%.2x ", pointer[i]);
    }
    printf("\n");    
}