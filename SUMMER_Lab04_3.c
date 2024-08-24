#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    int grid[101][101] = {0}; // 1부터 100까지의 좌표를 커버하는 2차원 배열

    // 4개의 직사각형의 좌표를 입력받고 해당 영역을 배열에 표시
    for (int i = 0; i < 4; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                grid[x][y] = 1; // 직사각형이 덮는 영역을 1로 표시
            }
        }
    }

    // 전체 면적 계산
    int area = 0;
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            if (grid[x][y] == 1) {
                area++;
            }
        }
    }

    // 결과 출력
    printf("%d\n", area);

    return 0;
}