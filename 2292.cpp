#include <iostream>
#include <vector>
using namespace std;

int main(void){
// 껍질의 범위 찾기
    int p;
    cin >> p;
    //1: 1 2: 2~7 3:8~19 4: 20~37 5: 38~61
    // 6 12 18 24
    //13: layer3, 58: layer5
    //1+ 6(n-1)
    //6*n + prev
    int layer =1;
    for(int i=0, prev=1; ;i++){
        layer =  6 * i + prev;
        if(layer >= p){
            layer = i+1;
            break;
        } 
        prev = layer;        
    }
    cout << layer << endl;
    return 0;
}
