// #include <stdio.h>
// #define MAXSIZE 1000001
// int main(void){
// //공백을 만났을 때 앞에 있는 문자를 확인 vs 뒤에 있는 문자를 확인
//     // char str[MAXSIZE];
    
//     // fgets(str,MAXSIZE,stdin);
//     char* str = " a a "; //이런 특이한 케이스만 정상적으로 처리하는 알고리즘을 고치기 힘들어서 새로 작성해야했다.
//     // " a", "a"를 처리 못해서 알고리즘을 새로 짜야했음.
//     int count=0;
//     for(int i=0; str[i]!='\0'; i++){
//         // printf("%c", str[i]);
//         if(str[i] == ' '|| str[i] == '\n') {
//             if(i>0 && str[i-1]!= ' ')//앞 문자 확인
//                 count++;
//                 // printf("%d\n", str[i]);
//                 continue;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000001 //백만을 넘지않는다면 공백을 포함시켜야함.
int main(void){//단어를 구별하는 방법: 공백, 개행, \0 입력이 대소문자와 공백으로 주어지므로 공백과 \0만 생각하면됨
    char str[MAXSIZE];
    
    fgets(str,MAXSIZE,stdin);
    // char* str = " a a";

    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        // printf("%c", str[i]);
        if(str[i] != ' ' && str[i] != '\n') {
            count++;
            // printf("%d\n", str[i]);
            while(str[i] !=' ' && str[i] !='\n' && str[i] !='\0') {
                i++;
                if(str[i] =='\0'){
                    i--;
                    break;
                }
            }
        // printf("%d|| ", str[i]);
        }
        
    }
    printf("%d", count);
    return 0;
}
