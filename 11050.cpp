#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main(void){
    int n, k;
    cin >> n >> k;
    if(n-k < k) k = n-k;
    int res = 1;
    for(int i = 0; i<k; i++){
        res *= n-i;
        res /= (i+1);
    }
    
    cout << res << endl;
    return 0;
}
