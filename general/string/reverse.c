#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *reverse(char *str)
{
    int length = strlen(str);
    char *start, *end;
    char temp;
    int i = 0;
    
    start = str;
    end = str + (length - 1);

    for(i = 0; i < length/2; i++)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    return str;
}

int main()
{
    char str1[50] = "I am Nandhini";

    //char str1[50];
    //printf("Enter a string: ");
    //scanf("%s", str1);

    printf("Reversed String: %s\n", reverse(str1));
    return 0;
}