#include <iostream>
#include <vector>
using namespace std;

int main() {//BJ 11866
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> vec;
    for (int i = 1; i <= n; i++) vec.push_back(i);

    cout << "<";
    int index = 0;
    while (vec.size() > 1) {
        index = (index + k - 1) % vec.size();
        cout << vec[index] << ", ";
        vec.erase(vec.begin() + index);
    }
    cout << vec[0] << ">\n";
    return 0;
}
