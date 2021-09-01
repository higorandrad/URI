//Higor Andrade

#include <stdio.h>

int calcTime(int* list, int size);
void fillTime(int* list, int size);

int main(){
    int cases, numberPeoples, time = 0;
    int timeList[1001];

    cases = 30;
    scanf("%d", &numberPeoples);
    while(cases-- && numberPeoples != 0){
        fillTime(timeList, numberPeoples);
        time = calcTime(timeList, numberPeoples);

        printf("%d\n", time);
        time = 0;
        scanf("%d", &numberPeoples);
    }

    return 0;
}

int calcTime(int* list, int size){
    int time = 0, i;
    if(size == 1) return 10;
    for(i = 0; i < size-1; i++){
        if(list[i]+10 > list[i+1]) time += list[i+1]-list[i];
        else time += 10;
        }
    time += 10;
    return time;
}

void fillTime(int* list, int size){
    int i;
    for(i = 0; i < size; i++) scanf("%d", &list[i]);
}
