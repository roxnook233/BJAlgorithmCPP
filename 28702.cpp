#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    string inp[3];
    cin >> inp[0] >> inp[1] >> inp[2];
    int i =0;
    for(i=0; i<3; i++){
        if(inp[i] !="Fizz" && inp[i] != "Buzz" && inp[i] != "FizzBuzz") break;
    }
    int k = stoi(inp[i]);
    switch(i){
        case 0: 
            k+=3;
            break;
        case 1: 
            k+=2;
            break;
        case 2: 
            k+=1;
            break;
    }
    // cout << k << endl;
    if(k%3 && k%5) cout << k << endl;
    // else if(!k%3){ //연산자 우선순위가 단항 연산자가 높음.
    //     if(!k%5) cout << "FizzBuzz" << endl;
    //     else cout << "Fizz" << endl;
    // }
    else if(k%3 == 0){
        if(k%5 == 0) cout << "FizzBuzz" << endl;
        else cout << "Fizz" << endl;
    }
    else cout << "Buzz" << endl;
    return 0;
}
