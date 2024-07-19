#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int k;
    string temp;
    while(1){
        cin >> k;
        if(!k) break;
        temp = to_string(k);
        string rev_temp = temp;
         reverse(rev_temp.begin(), rev_temp.end());
        if(temp == rev_temp) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
