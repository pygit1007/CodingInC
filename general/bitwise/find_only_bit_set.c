#include<stdio.h>

int main()
{
    int no = 65536;
    int pos = 0;

    while(no)
    {
        if(no & 1)
            break;
        pos++;
        no >>= 1;
    }

    printf("Position of only bit set: %dth", pos);

    return 0;
}
