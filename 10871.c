#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *A, N, X;
    scanf("%d %d", &N, &X);
    A= (int*)malloc(sizeof(int)*N);
    for(int i=0; i<N; i++){
        scanf("%d", A+i);
        if(*(A+i)<X) printf("%d ", *(A+i));
    }
    printf("\n");
    free(A);
    return 0;
}
