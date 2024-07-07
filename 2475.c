#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int inp[5];
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &inp[i]);
        sum += pow(inp[i],2);
    }
    printf("%d\n", sum%10);
    return 0;
}
