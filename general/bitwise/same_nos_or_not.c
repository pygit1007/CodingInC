#include<stdio.h>

int main()
{
    int no1 = 123;
    int no2 = 123;

    if(no1 ^ no2)
        printf("Not same");
    else
        printf("Same");

    return 0;
}
