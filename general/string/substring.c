#include<stdio.h>
#include<string.h>

int is_present(char *str1, char *str2)
{
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    char *ptr = str2;
    int count = 0;

    if (l1 < l2)
        return 0;

    while(*str1 != '\0')
    {
        if(*str1 == *ptr)
        {
            str1++;
            ptr++;
            count++;
        }
        else
        {
            if((count!= l2) && (count > 0))
                count = 0;
            str1++;
        }
    }

    if(count == l2)
        return 1;
    else
        return 0;
}

int main() 
{
    //char str1[100] = "Hi I am Nandhini", str2[100] = "am";
#if 1
    char str1[100], str2[100];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
#endif
    if(is_present(str1, str2))
    {
        printf("Strings is present!!!");
    }
    else
    {
        printf("Strings is not present!!!");
    }

    return 0;
}