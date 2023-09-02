#include <stdio.h>

int main() {
    int input, sum = 0, i = 0;

    // 입력값을 받는다.
    scanf("%d", &input);

    while(sum < input) {
        i++;                 // 다음 숫자로 이동
        sum = i * (i + 1) / 2;  // 1부터 i까지의 합계 계산
    }

    // i 값 출력
    printf("%d\n", i);

    return 0;
}

