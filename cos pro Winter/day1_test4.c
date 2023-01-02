#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>
int solution(int price, char* grade);

void main() {
    int ans;
    int price = 10000;
    char* grade = "S";  //문자열 상수
    ans = solution(price, grade);  // 또는 ans = solution(price, "V");
    printf("%d", ans);
}

int solution(int price, char* grade) {
    int answer = 0;
    if (strcmp(grade, "S") == 0) price *= 0.95;
    else if (strcmp(grade, "G") == 0) price *= 0.9;
    else if (strcmp(grade, "V") == 0) price *= 0.85;
    answer = price;
    return answer;
}
