#include<stdio.h>

int main()
{
    int no = 7;
    int count = 0;

    while(no)
    {
        count += no & 1;
        no >>= 1;
    }

    printf("No of bits set: %d", count);

    return 0;
}
