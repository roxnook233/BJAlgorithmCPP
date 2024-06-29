#include <stdio.h>
#define SUB(a,b) ((a)-(b))

int main(void){
    int prev =0, corrent;
    int sub =0;
    int stat =0;

    scanf("%d", &prev);
    for(int i=0; i<7; i++){
        scanf("%d", &corrent);
        sub =SUB(corrent, prev);
        prev = corrent;
        if(i == 0) {
            stat = sub;
            continue; //처음 두 개의 차이 저장
        }
        if(sub != stat) {
            stat = 0;
        }
    }

    // if(stat) printf("ascending\n"); //descending에서 제대로 출력안됨
    if(!stat) printf("mixed\n");
    else if(stat == 1) printf("ascending\n"); 
    else printf("descending\n");

    return 0;
}

/*
int main(void){
    int prev =0, corrent;
    int sub =0;
    int stat =0;

    scanf("%d", &prev);
    for(int i=0; i<7; i++){
        scanf("%d", &corrent);
        sub =SUB(corrent, prev);
        prev = corrent;
        if(i == 0) {
            stat = sub;
            continue; //처음 두 개의 차이 저장
        }
        if(sub != stat) {
            printf("mixed\n");// 8번을 입력받지 않는다.
            return 0;;
        }
    }

    // if(stat) printf("ascending\n"); //descending에서 제대로 출력안됨
    if(stat == 1) printf("ascending\n"); 
    else printf("descending\n");

    return 0;
}
*/
