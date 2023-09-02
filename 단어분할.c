#include <stdio.h>

int main(){
    char d[20];
    scanf("%s",d); // 단어배열 입력시에는&d노노
    for(int i=0;d[i]!=0;i++){
        printf("\'%c\'\n",d[i]);
    }
    return 0;
}
