#include <stdio.h>
 
int main(void){
    int T;
    T = 903219;
    int heure = T/3600;
    int minute = (T%3600)/60;
    int seconde = T%60;
    printf("%d %d %d",heure, minute, seconde);
    return 0;

}