// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    int arr[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            arr[i][j] = 51;
        }
    }
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            arr[i][j] = height[i - 1][j - 1];
        }
    }
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j] && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1]) count++;
        }
    }

    return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int height[4][4] = {{3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9}};
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}