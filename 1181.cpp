#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b) {
    if (a.size() == b.size())
        return a < b;  // 길이가 같으면 사전순으로 정렬
    return a.size() < b.size();  // 길이 순으로 정렬
}

int main() {
    int n;
    vector<string> v;
    vector<string> res;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        if (find(v.begin(), v.end(), temp) == v.end()) { //중복제거
            v.push_back(temp);
        }
    }

    sort(v.begin(), v.end(), compare);

    for(const auto &str : v) {
        cout << str << endl;
    }

    return 0;
}
