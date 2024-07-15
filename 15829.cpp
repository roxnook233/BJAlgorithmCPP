#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main(void){
    int n;
    string s;

    cin >> n >> s;
    long long res = 0;
    long long power =1;
    for(int i = 0; i < n; i++){
        // cout << long(pow(31,i))* (s[i]-'a' + 1) %  1234567891<< " ";
        res = (res + (s[i]-'a' + 1) * power)%  1234567891;
        power =(31 * power ) % 1234567891;
    }
    cout << res << endl;
    return 0;
}
