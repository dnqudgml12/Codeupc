#include <stdio.h>

int main(){

    int a,b;

    scanf("%d %d",&a,&b);
    if(a==0 || b==0){
         printf("0");
    }else if (a&&b)
    {
        printf("1");
    }
    
    return 0;
}