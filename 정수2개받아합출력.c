#include <stdio.h>

int main() {
    long long int a, b;  // 변수 타입을 'long long int'로 변경

    scanf("%lld %lld", &a, &b);

    long long int c = a + b;  // 'long long int'로 변경
    printf("%lld", c);  // 출력 형식 지정자를 '%lld'로 변경

    return 0;
}


/*
#include <stdio.h>

int main(){

    long int a;
    long int b;

    scanf("%lld %lld",&a,&b);

    long int c = a+b;
    printf("ll%d",c);
    return 0;
}

변수 타입: 당신의 코드에서 변수 a, b, c는 long int 타입을 사용했습니다. 그런데 입력 및 출력에서 %lld를 사용하려면 변수는 long long int 타입이어야 합니다.

출력 형식 지정자: printf에서 사용한 출력 형식 지정자는 "ll%d" 인데, 이것은 잘못되었습니다. long long int를 출력할 때는 %lld를 사용해야 합니다.

다음은 수정된 코드입니다:
*/
/*
#include <stdio.h>

int main(){

    int a;
    int b;

    scanf("%d %d",&a,&b);

    int c = a+b;
    printf("%d",c);
}
*/