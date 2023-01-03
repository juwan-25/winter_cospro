#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>

int solution(int price[], int price_len, int money);

void main() {
    int ans;
    int price[] = { 2100, 3200, 2100, 800 };
    ans = solution(price, 4, 10000);
    printf("%d", ans);
}

int solution(int price[], int price_len, int money) {
    int answer = 0;
    int sum = 0;
    for (int i = 0; i < price_len; i++) {
        sum += price[i];
    }
    if (money >= sum) answer = money - sum;
    else answer = -1;
    return answer;
}
