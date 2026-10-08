#include <stdio.h>

int main(void)
{
    int answer, guess;

    printf("정답 숫자: ");
    scanf("%d", &answer);
    printf("추측 숫자: ");
    scanf("%d", &guess);

    int a[3] = { answer / 100, answer / 10 % 10, answer % 10 };
    int g[3] = { guess / 100, guess / 10 % 10, guess % 10 };

    int strike = 0, ball = 0, miss = 0;

    for (int i = 0; i < 3; i++) {
        if (g[i] == a[i]) {
            strike++;                       
        } else if (g[i] == a[0] || g[i] == a[1] || g[i] == a[2]) {
            ball++;                         
        } else {
            miss++;                        
        }
    }

    printf("===== 판정 결과 =====\n");
    printf("스트라이크: %d\n", strike);
    printf("볼: %d\n", ball);
    printf("불일치: %d\n", miss);
    printf("정답 여부: %d\n", strike == 3 ? 1 : 0);

    return 0;
}