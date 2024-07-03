#include <stdio.h>
#include <stdlib.h>

int main(void){
    char alp[26];
    for(int i=0; i<26; i++) alp[i] =-1;
    char str[100];

    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == '\n') break;
        if(alp[str[i]-'a'] == -1) alp[str[i]-'a'] = i; 
    }
    for(int i=0; i<26; i++)
        printf("%d ", alp[i]);
    printf("\n");
    return 0;
}
