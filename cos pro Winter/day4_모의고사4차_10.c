// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len, int cutline) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] >= cutline) answer++;
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int scores[5] = {80, 90, 55, 60, 59};
    int scores_len = 5;
    int cutline = 60;
    int ret = solution(scores, scores_len, cutline);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}