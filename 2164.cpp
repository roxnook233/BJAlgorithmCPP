#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main(void){//BJ 2164
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    queue<int> q;
    
    for (int i = 1; i <= n; ++i)    q.push(i);
    
    while (q.size() > 1) {
        q.pop();
        int top = q.front();
        q.pop();
        q.push(top);
    }
    
    cout << q.front() << endl;
    return 0;
} 
