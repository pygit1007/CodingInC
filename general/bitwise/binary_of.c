#include<stdio.h>

int main()
{
    int no = 7;

    printf("No is: %d\n", no);

    for(unsigned int i = (1 << 31); i > 0; i = i/2)
        (no & i) ? printf("1") : printf("0");

    return 0;
}
