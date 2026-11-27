#include <stdio.h>

int main(void){
    int number = 999;
    int somme = 0;

    for (int i = 1; i <= number; i--){
        somme += i;
    }

    printf("%d\n", somme);
    return 0;
}