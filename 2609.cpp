#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a,int b){
    while(b){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b){
    return abs((a*b) / gcd(a,b));
}
int main(void){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl << lcm(a,b) <<endl;
    return 0;
}
