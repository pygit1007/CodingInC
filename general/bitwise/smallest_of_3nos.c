#include<stdio.h>

int find_smallest(int a, int b, int c)
{
    int tmp = 0;

    while(a && b && c)
    {
        a--;
        b--;
        c--;
        tmp++;
    }

    return tmp;
}
int main()
{
    int a = 5;
    int b = 7;
    int c = 4;

    printf("Smallest is %d", find_smallest(a, b, c));
    return 0;
}