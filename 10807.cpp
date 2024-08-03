#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main(void){//BJ 10807
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a, b, c, res = 0;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    cin >> c;
    sort(vec.begin(), vec.end());
    auto it = find(vec.begin(), vec.end(), c);
    for(int i = distance(vec.begin(), it); i < n; i++ ){
        if(vec[i] == c) res++;
    }
    cout << res << '\n';

    return 0;
}
