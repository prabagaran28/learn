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
printf("%d",gp.a);

    return 0;
}