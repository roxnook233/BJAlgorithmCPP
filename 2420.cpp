#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main(void){//BJ 2420
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m;
    cin >> n >> m;
    cout << abs(n-m) << '\n';
    return 0;
}
