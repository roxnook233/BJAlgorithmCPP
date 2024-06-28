#include <stdio.h>

int main(void){
    int a[9];
    int max = 0;
    for(int i=0; i<sizeof(a)/sizeof(int); i++){
        scanf("%d", &a[i]);
        if(a[i]> a[max]) max= i;
    }
    printf("%d\n%d\n", a[max], max+1);
    return 0;
}
