#include <iostream>
#include <string.h>
//O가 연속으로 나오면 1씩 점수 증가

int main(void){
    char str[80];
    int inp_num=0;
    int res =0;
    scanf("%d", &inp_num);
    for(int i=0; i<inp_num; i++){
        res =0;
        scanf("%s", str);
        int numLev =1;// 점수가 증가하는 값
        for(int k =0; k< strlen(str)+1; k++){
            if(str[k] == 'O'){
                res +=numLev++;
            }
            else numLev =1;
        }
        printf("%d\n", res);
    }
   return 0;
}