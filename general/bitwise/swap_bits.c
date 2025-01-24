#include<stdio.h>

// swap 2 bits from positions 0 and 3
int swap_bits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n)
{
    unsigned int s1 = (x >> p1) & ((1U << n) - 1);
    unsigned int s2 = (x >> p2) & ((1U << n) - 1);
    unsigned int xor = (s1 ^ s2);
    xor = (xor << p1) | (xor << p2);
    unsigned int result = x ^ xor;
    return result;
}

int main()
{
    int res = swap_bits(28, 0, 3, 2);

    printf("Result: %d", res);

    return 0;
}
