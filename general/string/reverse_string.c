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

    if(start == end)
    {
        printf("Only 1 character length\n");
        return str;
    }

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

int split(char *string, char *words[])
{
    int count = 0;
    char *ptr = string;
    char *word = (char *)malloc(sizeof(string));
    char *tmp = word;

    while(ptr != NULL)
    {
        if((*ptr != ' ') && (*ptr != NULL))
        {
            *tmp = *ptr;
            tmp++;
            ptr++;
        }
        else
        {
            *tmp = '\0';
            words[count] = (char *)malloc(sizeof(word));
            memcpy(words[count], word, sizeof(word));
            memset(word, 0, sizeof(string));
            tmp = word;
            count++;
            if(*ptr != '\0')
            {
                words[count] = " \0";
                count++;
                ptr++;
            }
            else
            {
                words[count] = '\0';
                break;
            }
        }
    }

    free(word);
    return count;
}

int main()
{
    char *str1 = "I am Nandhini";
    char *str2 = malloc(sizeof(str1));
    char *words[10] = {NULL};
    int count = 0;
    char *rev_ptr = str2;

    count = split(str1, words);
    printf("Sentence contains %d words!!", count);

    for(int i = 0; i <= (count-1); i++)
    {
        printf("length: %d", strlen(words[i]));
        strcpy(rev_ptr, reverse(words[i]));
        rev_ptr += strlen(words[i]);
    }
    printf("Reversed String: %s\n", str2);

    free(str2);
    return 0;
}