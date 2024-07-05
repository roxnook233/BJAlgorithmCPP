#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    char str[100];
    int sum=0;
    scanf("%d", &n);
    scanf("%s", str);

    for(int i=0; i<n; i++){
        sum+= str[i]-'0';
    }
    printf("%d\n", sum);
}
