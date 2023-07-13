#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    printf("Enter a string: ");
    scanf("%s",str2);
    strcpy(str1,str2);
    printf("str1 = %s, str2 = %s\n",str1,str2);
    return 0; 
}

