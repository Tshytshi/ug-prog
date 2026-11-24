#include <stdio.h>

int main(void){
    int a;
    int b;
    int sous;
    int add;
    int div;
    int multi;
    a= 421;
    b= 4;
    add = a + b;
    sous = a - b;
    div = a / b;
    multi = a * b;

    printf("%d %d %d %d",add,sous,div,multi);
    return 0;
}