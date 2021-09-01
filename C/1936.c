//Higor Andrade

#include <stdio.h>

int fatorialCalculate(int number);
int verify(int number);

int main(){
    int number, count;

    scanf("%d", &number);
    count = 0;
    while(number > 0){
        number = number - verify(number);
        count++;
    }
    printf("%d\n", count);

    return 0;
}
int fatorialCalculate(int number){
    int i;
    for(i = number-1; i > 0 ; i--) number *= i;
    return number;
}

int verify(int number){
    int resultFatorial, previousResult;
    if(number == 1) return 1;
    int i = 1;
    resultFatorial = 0;
    while(resultFatorial <= number){
        resultFatorial = fatorialCalculate(i++);
        if(resultFatorial <= number) previousResult = resultFatorial;
    }
    return previousResult;
}
