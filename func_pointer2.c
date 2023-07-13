#include <stdio.h>
void func(char,void(*fp) (float));
void func1(float);

int main()
{
    printf("Function main() called\n");
    func('a',func1);
    return 0;
}

void func(char b,void(*fp) (float))
{
    printf("function func() called\n");
    (*fp) (10.5);
}

void func1(float f)
{
    printf("Function func1() called\n");
}