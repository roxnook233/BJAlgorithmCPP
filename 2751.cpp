#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define MILL 1000000

int main(void){//BJ 2751
    int n = 0;
    scanf("%d", &n);
    int arr[2 * MILL +1] = {0};
//-1000000 0 1000000
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        if(temp >= 0) arr[temp + MILL]++;
        else arr[MILL - abs(temp)]++;
    }

    for(int i = 0; i < MILL * 2 + 1; i++)
        if(arr[i] != 0) printf("%d\n", i - MILL);
    return 0;
}
