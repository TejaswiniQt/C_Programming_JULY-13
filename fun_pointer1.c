#include <stdio.h>
int add(int,int), result;

int main()
{
    int (*fptr) (int,int);
    int result;
    fptr = add;

    result = add(5,6);
    printf("%d\n",result);
    return 0;
}

int add(int a,int b)
{
    return a+b;
}