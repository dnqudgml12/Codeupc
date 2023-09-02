#include <stdio.h>

int main(){
double d;
scanf("%lf", &d); // double(long float) 형식으로 입력
printf("%0.11lf", d);


    return 0;
}


#include <stdio.h>

int main(){

    int a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a+b+c);
    d=(a+b+c)/3;
    printf("%0.1f\n",(float)d);

    return 0;

}