#include <unistd.h>

int main(void){
    int number = 0;

    while (number < 3){
        write(1, "Une phrase\n", 11);
        number++;
    }
}