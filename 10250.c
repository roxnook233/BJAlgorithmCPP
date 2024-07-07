#include <stdio.h>
#include <stdlib.h>

int main(void){
    int t; 
    int h, w, n;
    
    scanf("%d", &t);
    

    //h==1인 경우 10n or 1n출력
    //w==1인 경우 n01출력
    //6 12 1 // 101
    //6 12 6 // 601
    //6 12 10 402
    //6 12 12 602
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &h, &w, &n);
        int temp = n%h*100;// 앞 두자리
        int backtemp = n/h+1;
        if(!temp) {
            temp = h*100;
            backtemp = n/h;
        }
        printf("%d\n",  temp+ backtemp);// col정하고(각 층의 호실%) row정하기(층수 /)
    }
    return 0;
}

/*
int main(void)
{
    int t, h, w, n, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        if (n % h == 0) printf("%d%02d\n", h, n / h);
        else printf("%d%02d\n", n % h, n / h + 1);
    }
    return 0;
}
*/
