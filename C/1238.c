//Higor Andrade

#include <stdio.h>
#include <string.h>

void concatenate(char* word1, char* word2);

int main(){
    int cases;
    char word1[60], word2[60];

    scanf("%d", &cases);

    while(cases--){
        scanf("%s %s", word1, word2);

        concatenate(word1, word2);
    }

    return 0;
}

void concatenate(char* word1, char* word2){
    int i, j, sizeWord1, sizeWord2, min, max, maxFlag;
    char newWord[101];
    
    sizeWord1 = strlen(word1);
    sizeWord2 = strlen(word2);
    
    if(sizeWord1 > sizeWord2) min = sizeWord2, max = sizeWord1, maxFlag = 1;
    else min = sizeWord1, max = sizeWord2, maxFlag = 0;

    for(i = 0, j = 0; j < min; i += 2, j++){
        newWord[i] = word1[j];
        newWord[i + 1] = word2[j];
    }
    
    newWord[i] = '\0';

    if(maxFlag) strcat(newWord, &word1[j]);
    else strcat(newWord, &word2[j]);
    
    printf("%s\n", newWord);
}