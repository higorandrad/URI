//HigorAndrade

#include <stdio.h>

void fillList(int* list, int size);

int main(){
    int numberEmployees, numberEvents, option, a, b, temp, counter;

    scanf("%d %d", &numberEmployees, &numberEvents);

    int list[numberEmployees];
    fillList(list, numberEmployees);

    while(numberEvents--){
        scanf("%d %d", &option, &a);

        if(option == 1){
            scanf("%d", &b);

            temp = list[a];
            list[a] = list[b];
            list[b] = temp;
        }
        else if(option == 2){
            counter = 0;
            b = list[a];

            while(b != a){
                b = list[b];
                counter++;
            }
            printf("%d\n", counter);
        }
    }


    return 0;
}

void fillList(int* list, int size){
    int i;
    for(i = 1; i <= size; i++) list[i] = i;
}
