#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main(void){//BJ 11866
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
  // 1 2 3 4 5 6 7 ... n (n, k)  3
  // k번 째 사람을 계속 제거
  // 1 2 4 5 6 7 (6, 3)
  // 1 2 4 5 7
    vector<int> vec;

    for(int i = 1; i <= n; i++)    vec.push_back(i);
    
    cout << "<";
    int j = k - 1;

    while(vec.size() > k-1){
        cout << vec[j];
        if(k == 1 && vec.size() == 1) cout << ">\n";
        else cout << ", ";
        auto it = vec.begin() + j;
        vec.erase(it);
        j += k-1;
        if(j > vec.size()-1) j -= vec.size() ;
    }
    
    for(int i = 0; i < k -1; i++){
        j += 1;
        if(j == k) j = 0;
        cout << vec[j];
        if(i == k-2) cout << ">\n";
        else cout << ", ";
    }

    return 0;
} 
