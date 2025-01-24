#include<stdio.h>

int main()
{
#if 0
    char name[50];
    printf("Enter name: ");
    scanf("%s", name);
    //fgets(name, sizeof(name), stdin);
    printf("Name: %s", name);
#endif

    char name[] = "I am here";

    printf("String: %s", name);
    printf("\n0x%x", name);           // Base pointer --> Gives address
    printf("\n&*name: %x", &(*name));          // Content @ Base pointer --> I
    printf("\n*name: %c", *name);          // Content @ Base pointer --> I
    printf("\nname+1: %c", name+1);        // Pointer+2
    printf("\n*name+1: %c", *name+1);        // Pointer+2
    printf("\n*(name+2): %c", *(name+2));

    return 0;
}