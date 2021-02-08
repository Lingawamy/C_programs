#include <stdio.h>

int main()
{
    char name[30];
    printf("enter your name\n");
    scanf("%[^\n]s",name);
    printf("%s",name);

    return 0;
}
