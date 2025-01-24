#include<stdio.h>

int main()
{
    int no = 203;
    int tmp = 0;

    //printf("Enter a no: ");
    //scanf("%d", no);

    while(no)
    {
        no >>= 1;
        tmp++;
    }

    printf("MSB set is %d", tmp);
    return 0;
}