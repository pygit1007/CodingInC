#include<stdio.h>

// 7 --> 111
// Answer --> 110 = 6

// 15 --> 1 0101
// Answer --> 1 0100 = 14

int main()
{
    int no = 236;
    unsigned int ans = 0x0;

    printf("No is: %d\n", no);

    ans = (unsigned int)(no & (no - 1));
    printf("No after turning off rightmost bit: %x", ans);

    return 0;
}
