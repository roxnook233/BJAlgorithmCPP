#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){//BJ 10814
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    vector<vector<string>> vec(200);
    for(int i = 0; i < n; i++){
        int age;
        string name;
        // scanf("%d %s", &age, &name);
        cin >> age >> name;
        vec[age-1].push_back(name);
    }
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < vec[i].size(); j++)
            cout << i + 1 << " " << vec[i][j] << "\n"; // printf("%d %s\n", i +1, vec[i][j]);
    }
    return 0;
}
