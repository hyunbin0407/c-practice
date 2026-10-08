#include <stdio.h>

int main(void)
{
    int h, m, s, duration;

    printf("시작 시 분 초: ");
    scanf("%d %d %d", &h, &m, &s);
    printf("작업 소요 시간(초): ");
    scanf("%d", &duration);

    int total = h * 3600 + m * 60 + s + duration;

    int days = total / 86400;   
    int rest = total % 86400;   

    int end_h = rest / 3600;
    int end_m = (rest % 3600) / 60;
    int end_s = rest % 60;

    printf("===== 작업 종료 정보 =====\n");
    printf("종료일: 시작일로부터 %d일 뒤\n", days);
    printf("종료 시각: %d시 %d분 %d초\n", end_h, end_m, end_s);

    return 0;
}