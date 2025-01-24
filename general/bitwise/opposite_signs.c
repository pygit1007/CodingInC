#include<stdio.h>

int main()
{
    int no1 = -123;
    int no2 = 124;
    int val = 0;

    val = (no1 ^ no2);
    printf("XOR: %x", val);

    if(val < 0)
        printf("Signs are opposite");
    else
        printf("Signs are not opposite");

    return 0;
}
