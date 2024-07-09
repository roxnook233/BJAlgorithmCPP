#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int calculateCost(vector<string>& str, int x, int y, char startColor) {
    int cost = 0;
    char currentColor = startColor;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (str[x+i][y+j] != currentColor) {
                cost++;
            }
            currentColor = (currentColor == 'W') ? 'B' : 'W';
        }
        currentColor = (currentColor == 'W') ? 'B' : 'W';
    }
    return cost;
}

int main(void){
    int h, w;
    cin >> h >> w;

    vector<string> str(h);
    for (int i = 0; i < h; i++) {
        cin >> str[i];
    }

    int minCost = INT32_MAX;

    for (int i = 0; i <= h-8; i++) {
        for (int j = 0; j <= w-8; j++) {
            int costW = calculateCost(str, i, j, 'W');
            int costB = calculateCost(str, i, j, 'B');
            minCost = min({minCost, costW, costB});
        }
    }

    cout << minCost << endl;

    return 0;
}
