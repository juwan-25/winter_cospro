#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>
int solution(int price, char* grade);

void main() {
    int ans;
    int price = 10000;
    char* grade = "S";  //���ڿ� ���
    ans = solution(price, grade);  // �Ǵ� ans = solution(price, "V");
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
