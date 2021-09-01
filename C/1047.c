//Higor Andrade

#include <stdio.h>

#define ONEDAYINMINUTES 1440
#define ONEHOURINMINUTES 60

int calculateTime(int sh, int fh, int sm, int fm);
void printMenssage(int h, int m);

int main(int argc, char const *argv[]){
    int startHour, startMinute, finalHour, finalMinute, time;

    scanf("%d %d %d %d", &startHour, &startMinute, &finalHour, &finalMinute);
    
    time = calculateTime(startHour, finalHour, startMinute, finalMinute);
    printMenssage(time / ONEHOURINMINUTES, time % ONEHOURINMINUTES);

    return 0;
}

int calculateTime(int sh, int fh, int sm, int fm){

    if(sh == fh){
        if(sm > fm) return ONEDAYINMINUTES  - (sm - fm);
        else if(sm < fm) return (fm - sm);
        else return ONEDAYINMINUTES;
    }
    else if(sh > fh){
        printf("z\n");
        return (ONEDAYINMINUTES - (sh * ONEHOURINMINUTES + sm)) + (fh * ONEHOURINMINUTES + fm);
    }
    else{
        return (fh * ONEHOURINMINUTES + fm) - (sh * ONEHOURINMINUTES + sm);
    } 
}

void printMenssage(int h, int m){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
}