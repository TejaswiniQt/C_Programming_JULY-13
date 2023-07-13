#include <stdio.h>
#include <string.h>
int string_cmp(char str1[],char str2[]);

int main()
{
    char str1[50], str2[50];
    printf("Enter two string: ");
    gets(str1);
    gets(str2);
    if((string_cmp(str1,str2)) == 0)
    printf("Strings are same\n");
    else
    printf("Strings are not same\n");
     if((strcmp(str1,str2)) == 0)
    printf("Strings are same\n");
    else
    printf("Strings are not same\n");
    return 0; 
}

int string_cmp(char str1[],char str2[])
{
    int i;
    for(i=0; str1[i]==str2[i]; i++)
    if(str1[i] == '\0')
    return 0;
    return(str1[i]-str2[i]);
}
