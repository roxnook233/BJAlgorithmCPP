#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
    int a[3];
    for(int i=0; i<3; i++)
        scanf("%d", &a[i]);
    printf("%d\n", a[0]+a[1]-a[2]);
    int exp = (int)log10(a[1]) +1;
    a[0] *= (int)pow(10, exp);

    printf("%d\n", a[0]+a[1] -a[2] );//+ a[1]-a[2]);

    return 0;
}
/*
int main(void){
    unsigned int a[3];
    for(int i=0; i<3; i++)
        scanf("%u", &a[i]);
    printf("%u\n", a[0]+a[1]-a[2]);
    int exp = (int)log10(a[1]) +1;
    a[0] *= (int)pow(10, exp);

    printf("%d\n", a[0]+a[1] -a[2] );//+ a[1]-a[2]);

    return 0;
}


*/
