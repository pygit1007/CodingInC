// gcc basic.c -o basic
// ./basic
// https://eecs280staff.github.io/tutorials/setup_vscode_macos.html#create-a-project

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;
    printf("Enter a no: ");
    scanf("%d", &no);

    printf("No: %d", no);
    return 0;
}