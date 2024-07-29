#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool arrange(pair<int, int> a, pair<int, int> b){
    if(a.first < b.first) return true;
    else if(a.first == b.first) return a.second < b.second;
    else return false;
}

int main(void){//BJ 11650
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
