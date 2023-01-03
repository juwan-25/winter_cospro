#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>

int solution(int arr[][4], int n, int k);
int func_a(int a[][4], int n);
int func_b(int a[][4], int n, int del);

void main() {
    int ans;
    int num[][4] = { {5,12,4,31}, {24,13,11,2}, {43,44,19,26}, {33,65,20,21} };
    ans = solution(num, 4, 3); //3번째로 작은수
    printf("%d", ans);  //5
}

int solution(int arr[][4], int n, int k) {
    int answer = 0;
    int min;
    for (int i = 1; i < k; i++) {
        min = func_a(arr, n);
        func_b(arr, n, min);
    }
    answer = func_a(arr, n);
    return answer;
}

// 최소값 찾기
int func_a(int a[][4], int n) {
    int min = 1001;
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < 4; ++c) {
            if (min > a[r][c]) {
                min = a[r][c];
            }
        }
    }
    return min;
}

// 지우는 함수
int func_b(int a[][4], int n, int del) {
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < 4; ++c) {
            if (del == a[r][c]) {
                a[r][c] = 1001;   // <-- 1001은 최소값이 될 수 없다.
                return 1;
            }
        }
    }
    return 0;
}

