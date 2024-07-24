#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main(void){//BJ 10989
    int n;
    cin >> n;
    vector<int> count(10001, 0);

    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        count[temp]++;
    }
    
    for(int i = 1; i < 10001; i++){
        for(int j = 0; j < count[i]; j++)
                printf("%d\n", i);
    }

    return 0;
}
