#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main(void){//BJ 2083
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<string> people;
    while(1){
        string s;
        int age, weight;
        cin >> s;
        cin >> age >> weight;
        if(s == "#") break;
        people.push_back(s);
        if(age <= 17 && weight < 80) cout << s << " Junior\n";
        else cout << s << " Senior\n";
    }
    return 0;
}
