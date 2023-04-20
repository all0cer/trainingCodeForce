#include <stdio.h>

int main(){
    int t, i, j;
    char s[5];
    int total = 1;
    scanf("%d", &t);

    for(i = 0; i<t; i++){
        scanf("%s",s);

        if(s[0] == '0'){
            printf("0\n");
            continue;
        }
        if(s[0] == '?'){
            total*=9;
        }
        for(j = 1; j<5; j++){
            if(s[j] == '?'){
                total*=10;
            }
        }

        printf("%d\n", total);
        total = 1;
    }
}