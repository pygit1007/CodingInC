#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    printf("Sentence contains %d words including spaces!!\n", count);

    for(int i = 0; i <= (count-1); i++)
    {
        //printf("length: %d", strlen(words[i]));
        strcpy(rev_ptr, words[i]);
        rev_ptr += strlen(words[i]);
    }
    printf("Reversed String: %s\n", str2);

    free(str2);
    return 0;
}