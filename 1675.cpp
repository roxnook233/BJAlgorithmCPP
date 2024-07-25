#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main(void){//BJ 1675
    //1 2 6 24 120 720 
    //2 4 6 8 
    //5 10 15 20
    //10으로 나눠지면 + 1
    //5의 홀수 배수면 + 1
    // 5 10 15 20 -> 5의 배수 만큼 더하면됨
    //25 -> 5*5
    int n;
    cin >> n;

    int res = 0;
    for(int i =1; i <= n; i++){
        int temp = i;
        while(temp % 5 == 0){
            res++;
            temp /= 5;
        }
    }

    cout << res << endl;
    return 0;
}
