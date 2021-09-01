//Higor Andrade

#include <stdio.h>

int calculate(int x, int y);

int main(){
    int height, width, numbeOfCases;

    scanf("%d", &numbeOfCases);
    while(numbeOfCases--){
    scanf("%d %d", &height, &width);
    printf("%d\n", calculate(height, width));
    }
    return 0;
}


int calculate(int x, int y){
    return (x/3)*(y/3);
}
