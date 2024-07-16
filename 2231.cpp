#include <iostream>

using namespace std;

int main(void){
    int inp;

    cin >> inp;
    int temp = inp;
    int cnt = 1;
    while(temp /= 10) cnt++;
    //10 이하의 수를 몇개 더하는가? -> 시작점 찾기
    int i;
    for(i = inp - 9 * cnt; i <= inp;  i++){
        temp = i;
        int a = i;
        for(int k = 0; k < cnt; k++){
            temp += a % 10;
            a /= 10;
        }
        if(inp == temp){
            break;
        }
    }
    if(inp != temp) cout << 0 << endl;
    else cout << i <<endl;

    return 0;
}
