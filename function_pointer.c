#include<stdio.h>
void func(int a)
{
	printf("value of a is :%d", a);
}
int main()
{
    void (*fun_ptr)(int) = &func;
    (*fun_ptr)(10);
}