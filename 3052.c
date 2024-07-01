#include <stdio.h>

int main(void){
    int arr[10];
    int diff=1;
    int sum =0;
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        arr[i] %= 42;
        for(int j=0; j<i; j++){
            if(arr[j] == arr[i]){// 이전 입력에서 다른 게 나왔으면 더함
                break;
            }
            if(j== i-1) diff++; //새로운 수면 diff++
            
        }
    }
    printf("%d\n", diff);
}
