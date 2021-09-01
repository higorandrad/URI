#include <stdio.h>

int rankPosition(int x);

int main(){
    int position;

    scanf("%d", &position);

    printf("Top %d\n", rankPosition(position));

    return 0;
}

int rankPosition(int x){
    if(x == 1) return 1;
    else if(x > 1 && x <= 3) return 3;
    else if(x > 3 && x <= 5) return 5;
    else if(x > 5 && x <= 10) return 10;
    else if(x > 10 && x <= 25) return 25;
    else if(x > 25 && x <= 50) return 50;
    else if(x > 50 && x <= 100) return 100;
    else return 0;
}
