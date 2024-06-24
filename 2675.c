#include <stdio.h>

int main(void){
    char str[20];
    int t, r;
    scanf("%d", &t);
    for(int i =0; i<t; i++){
        scanf("%d %s", &r, str);
        int k=0;
        while(!str[k] == '\0'){
            for(int j =0; j<r; j++)
                printf("%c", str[k]);
            
            k++;
        }
        printf("\n");      
    }
    return 0;
}
