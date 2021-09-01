//Higor Andrade

#include <stdio.h>
#include <math.h>

int main(){
    int width, height, lenght, vol,result;

    do{
        scanf("%d %d %d", &width, &height, &lenght);
        if(width == 0 || height ==0 || lenght ==0) break;

        result = cbrt(width*height*lenght);
        printf("%d\n", result);

    }while(1);

    return 0;
}
