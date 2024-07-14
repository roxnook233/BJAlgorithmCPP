#include <iostream>

using namespace std;

int main(void){
    int N; 
    int t_size[6];
    int t, p;
    cin >> N;
    
    for(int i = 0; i < sizeof(t_size)/sizeof(int); i++)
        cin >> t_size[i];

    cin >> t >> p;

    int count = 0;
    for(int i = 0; i < sizeof(t_size)/sizeof(int); i++){
        count += (t_size[i] + t -1)/t;
        // if(t_size[i] != 0){
        //     if(t_size[i]%t == 0) count += t_size[i]/t; //printf("%d", t_size[i]%t+1);
        //     else count += t_size[i]/t + 1; //printf("%d", t_size[i]%t);
        // }
    }

    printf("%d\n", count);
    printf("%d %d\n", N/p, N%p);

    return 0;
}
