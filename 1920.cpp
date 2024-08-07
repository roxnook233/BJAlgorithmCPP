#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <set>
using namespace std;

int main(void){//BJ 1920
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n;
    set<string> inps;
    string temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        inps.insert(temp);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> temp;
        if(inps.find(temp) != inps.end()) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
