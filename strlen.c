#include <stdio.h>
#include <string.h>

int str_len(char str[]);

int main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("Length of a string is : %u\n",str_len(str));
    printf("Length of a string is : %u\n",strlen(str));
    return 0; 
}

int str_len(char str[])
{
    int i=0;
    while(str[i] != '\0')
    i++;
    return i;
}