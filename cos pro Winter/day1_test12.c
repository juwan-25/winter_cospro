#include <stdio.h>

//최고 점수 구하기
int func_a(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] > ret)
            ret = s[i];
    return ret;
}

//점수의 총합
int func_b(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        ret += s[i];
    return ret;
}

//최저 점수 구하기
int func_c(int s[], int arr_size) {
    int ret = 101;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] < ret)
            ret = s[i];
    return ret;
}

int solution(int scores[], int scores_len) {
    int sum = func_b(scores, scores_len);
    int max_score = func_a(scores, scores_len);
    int min_score = func_c(scores, scores_len);
    return sum - max_score - min_score;
}

int main()
{
    int scores[] = { 50, 35, 78, 91, 85 };
    int scores_len = 5;
    printf("최저, 최고 점수 제외 총합 : %d", solution(scores, scores_len));
    return 0;
}
