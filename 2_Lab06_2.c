#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // N을 2*M으로 나눈 나머지로 설정하고, 나머지가 0이면 N을 2*M으로 설정
    N %= (2 * M);
    if (N == 0) {
        N = 2 * M;
    }

    int hands[M][2]; // 각 참가자의 두 손 높이
    int used[M];     // 각 참가자의 사용한 손 인덱스 (0: 첫 번째 손, 1: 두 번째 손)

    // 참가자들의 손 높이 입력
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &hands[i][0], &hands[i][1]);
        // 항상 작은 높이를 hands[i][0]에, 큰 높이를 hands[i][1]에 저장
        if (hands[i][0] > hands[i][1]) {
            int temp = hands[i][0];
            hands[i][0] = hands[i][1];
            hands[i][1] = temp;
        }
        used[i] = 0; // 사용한 손 초기화
    }

    int lastDrinker = -1; // 마지막으로 술을 마시는 참가자 번호

    // N층 쌓기
    for (int j = 0; j < N; j++) {
        int minHeight = 10001; // 최대 높이보다 큰 초기값
        int selectedIndex = -1;

        // 가장 작은 손 높이를 가진 참가자를 찾기
        for (int i = 0; i < M; i++) {
            // 사용 가능한 손이 있는지 체크
            if (used[i] < 2 && hands[i][used[i]] < minHeight) {
                minHeight = hands[i][used[i]];
                selectedIndex = i; // 선택된 참가자 인덱스 저장
            }
        }

        // 선택된 참가자의 손을 쌓기
        if (selectedIndex != -1) {
            lastDrinker = selectedIndex + 1; // 참가자 번호는 1부터 시작
            // 사용한 손 인덱스 증가
            used[selectedIndex]++;
        }
    }

    // 결과 출력
    printf("%d\n", lastDrinker);

    return 0;
}