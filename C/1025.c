#include <stdio.h>
#include <stdlib.h>

void searchKey(int *pieces, int numberOfPieces, int  numberOfConsultations, int caseNumber);
int binarySearchInterative(int *vector, int item, int numberOfPieces);
int comparator(const void *a, const void *b);

int main(){
    int key, numberOfPieces, numberOfConsultations, caseNumber, i;

    caseNumber = 1;

    while(1){
        scanf("%d %d", &numberOfPieces, &numberOfConsultations);
        
        if(!numberOfPieces && !numberOfConsultations) break;
        
        int pieces[numberOfPieces];

        for (i = 0; i < numberOfPieces; i++){
            scanf("%d", &pieces[i]);
        }

        searchKey(pieces, numberOfPieces, numberOfConsultations, caseNumber);

        caseNumber++;
    }

    return 0;
}

void searchKey(int *pieces, int numberOfPieces, int  numberOfConsultations, int caseNumber){
    int i, index, piecesConsulted;

    qsort(pieces, numberOfPieces, sizeof(int), comparator);

    printf("CASE# %d:\n", caseNumber);

    for(i = 0; i < numberOfConsultations; i++){
        scanf("%d", &piecesConsulted);
        
        index = binarySearchInterative(pieces, piecesConsulted, numberOfPieces);
        
        while(pieces[index - 1] == pieces[index]) index--;
        
        if(index >= 0 ){
            printf("%d found at %d\n", piecesConsulted, index + 1);
            }

        else{
            printf("%d not found\n", piecesConsulted);
        }
    }
}

int binarySearchInterative(int *vector, int item, int numberOfPieces){
    int begin = 0;
    int end = numberOfPieces - 1;

    while (begin <= end) {

        int i = (begin + end) / 2;

        if (vector[i] == item) {
            return i;
        }

        if (vector[i] < item) {
            begin = i + 1;
        } else {
            end = i - 1;
        }
    }
    return -1;
}

int comparator(const void *a, const void *b) {
   if (*(int*)a > *(int*)b) return 1;

   else if (*(int*)a < *(int*)b) return -1;
   
   else return 0;  
}