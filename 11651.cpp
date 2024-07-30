#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool arrange(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main(void){//BJ 11651
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> point;
    
    for(int i = 0; i < n; i++){
        pair<int, int> p;
        cin >> p.first >> p.second;
        point.push_back(p);
    }
    sort(point.begin(), point.end(), arrange);
    
    for(int i = 0; i < n; i++){
        cout << point[i].first << " " << point[i].second << '\n';
    }
    return 0;
}
