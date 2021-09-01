//Higor Andrade

#include <stdio.h>
#include <math.h>

void checkNumberPrime(int number);

int main(){

    int number;
    int numberOfCases;

    scanf("%d", &numberOfCases);
    while(numberOfCases--){
        scanf("%d", &number);
        checkNumberPrime(number);

    }
    return 0;
}

void checkNumberPrime(int number){
    int prime =  1;

    if(number == 1) prime = 0;
    else{
        int i, raiz;
        raiz = (int)sqrt(number);
        for(i = 2; i <= raiz; i++){
            if(number % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if(prime) printf("Prime\n");
    else printf("Not Prime\n");
}
