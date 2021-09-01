//Higor Andrade

#include <stdio.h>

#define KG 1000

float calculateValue(float price, int weight);

int main(){
    float bitCoin, result, lowerValue;
    int weight, numberOfMarkets;

    scanf("%d", &numberOfMarkets);
    scanf("%f %d", &bitCoin, &weight);

    lowerValue = calculateValue(bitCoin, weight);

    while(numberOfMarkets-- > 1){
        scanf("%f %d", &bitCoin, &weight);
        result = calculateValue(bitCoin, weight);
        if(lowerValue > result) lowerValue = result;
    }
    printf("%.2f\n", lowerValue);

    return 0;
}

float calculateValue(float price, int weight){
    return (price*KG) / weight;
}
