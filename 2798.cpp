#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int a, b;

    cin >> a >> b;
    vector<int> card(a);

    for(int i=0; i<a; i++){
        int temp;
        cin >> card[i];
    }

    int max =0;
    for(int i=0; i<a-2; i++){
        int n1, n2, n3;
        n1 = card[i];
        if(n1> b-2) continue;
        for(int j=i+1; j<a-1; j++){
            n2 = card[j];
            if(n1+n2 > b-1) continue;
            for(int k=j+1; k<a; k++){
                n3= card[k];
                // cout << n1 <<" "<< n2 <<" " << n3 <<endl;
                if(n1+n2+n3> b) continue;
                else if(n1+n2+n3 > max) max =n1+n2+n3;
            }
        }
    }

    cout << max << endl;
    return 0;
}
