#include<stdio.h>

int main()
{
    int no1 = 7;
    int no2 = 8;

    printf("Nos before swap are: %d and %d", no1, no2);
    no1 = no1 ^ no2;
    no2 = no1 ^ no2;
    no1 = no1 ^ no2;

    printf("Nos after swap are: %d and %d", no1, no2);
    return 0;
}
