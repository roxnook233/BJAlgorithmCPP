#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
    int k = 0;
    cin >> k;
    //1 666 2 1666 10 9666
    //11 10666 12 11666 12 13 14 15666  16660 16661 16666 16667 16669 17666 ...
    //150666 156660 
    int count = 0;
    int res =0;
    for(int i = 0; count < k; i++){
        string temp = to_string(i);
        if(temp.find("666") != string::npos) count++;
        if(count == k) res =i;
    }
    printf("%d\n", res);
}
