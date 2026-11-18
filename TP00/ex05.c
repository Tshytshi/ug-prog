#include <stdio.h>
int main(void){
    int number;
    number = 7;
    number = number%2;
    if(number==0){
        printf("est pair %d",number);
    }
    else{
        printf("est impair %d", number);
    }
}