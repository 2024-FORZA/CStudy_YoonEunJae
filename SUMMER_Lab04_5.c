#include <stdio.h>
#include <math.h>

int roundNumber(int x) {
    int place = 10;

    while (x >= place) {
        x = (x + place / 2) / place * place;
        place *= 10;
    }

    return x;
}

int main() {
    int n, x;

    // 테스트 케이스 개수 입력
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // 각 테스트 케이스의 정수 x 입력
        scanf("%d", &x);
        // 반올림한 결과 출력
        printf("%d\n", roundNumber(x));
    }

    return 0;
}