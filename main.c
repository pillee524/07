#include <stdio.h>

int main(void)
{
    int i;
    for(i=0; i<5; i++)
        f();   
}

void f(void)
{
    int i;
    for(i=0; i<10; i++)
        printf("#");   
}