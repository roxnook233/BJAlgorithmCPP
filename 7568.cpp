#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){//BJ 7568
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    
    cin >> n;
    vector<pair<int, int>> w_h(n);
    for(int i = 0; i < n; i++){
        cin >> w_h[i].first >> w_h[i].second;
    }
    for(int i = 0; i < n; i++){
        int temp = 1;
        for(int j = 0; j < n; j++){
            if(w_h[i].first < w_h[j].first && w_h[i].second < w_h[j].second) temp++;
        }
        cout << temp << " ";
    }
    return 0;
}
