// 다음과 같이 include를 사용할 수 있습니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

char* solution(char* words[], int words_len) {
    
    char* answer = "";
    answer = (char*)malloc(sizeof(char) * words_len);
    for (int i = 0; i < words_len; i++) {
        if (strlen(words[i]) >= 5) strcat(answer, words[i]);
    }
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    char* words1[5] = {"my", "favorite", "color", "is", "violet"};
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);
    
    char* words2[3] = {"yes", "i", "am"};
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}