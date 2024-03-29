#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int value, char* unit) {
    int converted = 0;
    if (unit[0] == 'C')
        converted = value * 1.8 + 32;
    if (unit[0] == 'F')
        converted = (value - 32) / 1.8;
    return converted;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int value = 527;
    char* unit = "C";
    int ret = solution(value, unit);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}