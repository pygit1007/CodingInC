#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *substr(char *str, int pos1, int pos2)
{
    int count = 0;
    char *s1 = (char *)malloc((sizeof(char) * (pos2 - pos1)) + 1);
    char *s2 = s1;

    while(*str != NULL)
    {
        if((count >= pos1) && (count <= pos2))
        {
            *s2 = *str;
            s2++;
        }
        count++;
        str++;
    }
    *s2 = '\0';

    printf("Count is %d\n", count);
    return s1;
}

int main()
{
    char *str1 = "I am Nandhini";
    char *str2;

    str2 = substr(str1, 5, 8);
    printf("Str: %s\n", str2);

    return 0;
}