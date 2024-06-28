#include <stdio.h>
#include <stdlib.h>
int main(void){
    int temp;
    int mul =1;
    char str[12];
    for(int i=0; i<3; i++){
        scanf("%d", &temp);
        mul *= temp;
    }
    sprintf(str, "%d", mul);
    // printf("%s\n", str);

    int decimal[10]= {0};
    for(int i=0; str[i]!='\0'; i++){
        decimal[str[i]-'0']++;
    }
    for(int i=0; i<10; i++)
        printf("%d\n", decimal[i]);
    return 0;
}
