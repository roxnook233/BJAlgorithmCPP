#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int N; //사람의 수
    cin >> N;
    vector<int> tips(N); //길이가 N인 vector
    for(int i =0; i < N; i++){
        cin >> tips[i];
    }
    sort(tips.begin(), tips.end(), greater<int>()); // 내림차순 정렬
    
    //받을 수 있는 팁의 최댓값
    // 주려고 생각했던 돈 - (받은 등수 - 1) 
    // - val gave no tips
    //엄청 적은 팁을 주려고 한 사람을 마지막으로 미룬다.
    //가장 많은 팁을 주려고 한 사람을 먼저?
    //a +(b-1) + (c-2)+ ...
    //54321
    //55431

    long long res =0;
    for(int i =0; i < N; i++){
        if(tips[i] - i < 0)
            break;
    //    cout << tips[i] << " ";
        res += tips[i] - i; 
    }
    cout << res;
    return 0;
}