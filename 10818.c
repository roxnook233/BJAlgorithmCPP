#include <stdio.h>
#include <stdlib.h>

int main(void){
    int k;
    int *data;
    scanf("%d", &k);
    data = (int*)malloc(sizeof(int)* k);
    scanf("%d", &data[0]);
    int min =data[0], max= data[0];
    for(int i=1; i<k; i++){
        scanf("%d", &data[i]);
        if(data[i]> max) max = data[i];
        if(data[i]<min) min = data[i]; 
    }
    printf("%d %d\n", min, max);
    return 0;
}
