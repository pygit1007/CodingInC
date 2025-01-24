#include<stdio.h>

int is_same(char *str1, char *str2)
{
    while((*str1 != '\0') || (*str2 != '\0'))
    {
        if(*str1 == *str2)
        {
            str1++;
            str2++;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

int main() 
{
    //char str1[100] = "Hia", str2[100] = "Hia";
#if 1
    char str1[100], str2[100];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
#endif
    if(is_same(str1, str2))
    {
        printf("Strings are same!!!");
    }
    else
    {
        printf("Strings are different!!!");
    }

    return 0;
}