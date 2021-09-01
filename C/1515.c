//Higor Andrade

#include <stdio.h>

typedef struct{
    int year;
    int delay;
    char name[50];
}PT;

void fillPlanets(PT* list, int nsize);
void calculateDifference(PT* list, int size);

int main(){
    int numberOfPlanets, yearOfReceipt;
    PT planets[101];

    scanf("%d", &numberOfPlanets);
    while(numberOfPlanets != 0){
        fillPlanets(planets, numberOfPlanets);
        calculateDifference(planets, numberOfPlanets);
        scanf("%d", &numberOfPlanets);
    }

    return 0;
}

void fillPlanets(PT* list, int size){
    int i;
    for(i = 0; i < size; i++){
        scanf("%s", list[i].name);
        scanf("%d %d", &list[i].year, &list[i].delay);
    }
}

void calculateDifference(PT* list, int size){
    int i;
    PT winner = list[0];
    for(i = 0; i < size-1; i++){
        if((list[i+1].year-list[i+1].delay) < (winner.year - winner.delay))
            winner = list[i+1];
    }
    printf("%s\n", winner.name);

}
