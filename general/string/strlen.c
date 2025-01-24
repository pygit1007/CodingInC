#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int xstrlen(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
        count++;
        str++;
    }

    //printf("Count is %d", count);
    return count;
}

int main()
{
    char *str;
    str = "I am Nandhini";

    //str = (char *)malloc(100);

    //printf("Enter a sentence: ");
    //scanf("%s", str);

    printf("\nLength: %d\n", xstrlen(str));

    //free(str);
    return 0;
}