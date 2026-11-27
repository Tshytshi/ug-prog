#include <stdio.h>

int main(void){
    int age = 15;
    int joueur = 3;
    int adulte = 0;
    int reservation = 1;

    if(reservation == 0)
        printf("Réservation obligatoire\n");
    else if(joueur < 2)
        printf("Groupe trop petit\n");
    
    else if(joueur > 6)
        printf("Groupe trop grand\n");
    
    else if(((age >= 10 && adulte == 1) && \
                joueur >= 3) || (age >= 18 && joueur >= 4))
        printf("Accès autorisé\n");
    
    else 
        printf("Accès refusé\n");

    return 0;
}