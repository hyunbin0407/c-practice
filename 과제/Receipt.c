#include <stdio.h>

int main(void)
{
    int bread, drink, paid;

    printf("빵 수량: ");
    scanf("%d", &bread);
    printf("음료 수량: ");
    scanf("%d", &drink);
    printf("지불 금액: ");
    scanf("%d", &paid);

    int bread_price = bread * 1500;
    int drink_price = drink * 1000;
    int total = bread_price + drink_price;
    int change = paid - total;

    printf("===== 구매 영수증 =====\n");
    printf("빵 구매 금액: %d원\n", bread_price);
    printf("음료 구매 금액: %d원\n", drink_price);
    printf("총 구매 금액: %d원\n", total);

    if (change >= 0)
        printf("거스름돈: %d원\n", change);
    else
        printf("금액이 %d원 부족합니다.\n", -change);

    return 0;
}