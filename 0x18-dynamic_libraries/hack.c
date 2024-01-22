#include <stdlib.h>
#include <stdio.h>

int rand(void)
{
    static int numbers[6] = {9, 8, 10, 24, 75, 9};
    static int index = 0;
    
    return (numbers[index++]);
}

