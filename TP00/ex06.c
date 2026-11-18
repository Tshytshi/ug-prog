#include <stdio.h>

int main(void){
    int age;
    age=19;
    if(age<=1){
        printf("Salut bébé !");
    }
    else if(1<age && age<=14){
        printf("Bonjour,mes petits!");
    }
    else if(14<age && age<=30){
        printf("Bonjour jeune homme!");
    }
    else if(30<age && age<=60){
        printf("Bonjour Monsieur!");
    }
    else if(age>60){
        printf("Bonjour Papi!");
    }
    else{
        printf("Je n'ai aucune réponse.");
    }

}