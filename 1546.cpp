#include <iostream>
#include <malloc.h>
using namespace std;

int main(void){
    int inpc =0;
    cin >> inpc;
    int *inputs = (int*)malloc(sizeof(int)*inpc);
    
    double average =0;
    int max =0;
    for(int i=0; i<inpc; i++){
        cin >> inputs[i];
        max = (max >inputs[i] ? max : inputs[i]);
        
    }
    for(int i =0; i<inpc; i++){
        // average += (inputs[i]/max *100.0); // 오답 나눌때 나눌 때 소수점 버려서 안됨
        // average += ((1.0)*inputs[i]/max *100);
        average += ((double)inputs[i]/max *100);
        // printf("%lf\n", average);
    }
    printf("%lf\n", average/inpc);
    free(inputs);
    return 0;
}