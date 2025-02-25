#include <stdio.h>
#include <stdint.h>

typedef struct 
{
uint32_t a;
uint32_t b;
uint32_t c;
uint32_t d;
}gpio;
int main()
{
gpio gp;
gp.a =10;
gp.b =200;
printf("%d",gp.a);
gp.b =10;
printf("%d",gp.b);
printf("hello   World!");
printf("I am in newyork!");
    return 0;
}