#include <stdio.h>
#include <malloc.h>

//특정한 값 지우기 -> 가장 큰값 삭제
int* func_a(int arr[], int arr_size, int num) {
    int* ret = (int*)malloc(sizeof(int) * (arr_size - 1));
    int idx = 0;
    for (int i = 0; i < arr_size; ++i)
        if (arr[i] != num)
            ret[idx++] = arr[i];
    return ret;
}

// 방문객 수 차이 구하기
int func_b(int a, int b) {
    if (a >= b)
        return a - b;
    else
        return b - a;
}

// 가장 큰 값 구하기 
int func_c(int arr[], int arr_size) {
    int ret = -1;
    for (int i = 0; i < arr_size; ++i)
        if (ret < arr[i])
            ret = arr[i];
    return ret;
}

int solution(int visitor[], int n) {
    int max_first = func_c(visitor, n);
    int* visitor_removed = func_a(visitor, n, max_first);
    int max_second = func_c(visitor_removed, n-1);
    int answer = func_b(max_first, max_second);
    return answer;
}

int main()
{
    int visitor[] = { 4,7,2,9,3 };
    int n = 5;
    printf("가장 많은 방문객 수와 두번쨰로 많은 방문객 수 차이 : %d", solution(visitor, n));
    return 0;
}