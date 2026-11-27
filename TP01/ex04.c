#include <stdio.h>
#include <math.h>

int main(void){
    int a = 0;
    int b = 0;
    int c = 0;
    double delta;

    delta = b * b - 4 * a * c;
    printf("Delta = %f\n", delta);

    if (delta > 0)
    {
        printf("%f\n", (-b - sqrt(delta)) / (2.0 * a));
        printf("%f\n", (-b + sqrt(delta)) / (2.0 * a));
    }
    else if (delta == 0)
    {
        printf("x = %f\n", -b / (2.0 * a));
    }
    else
    {
        printf("Pas de solution\n");
    }
    return 0;
}