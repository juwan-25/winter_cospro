#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>
char* solution(char* characters);

void main() {
    char* ans;
    char* str = { "senteeeencccccceee" };
    ans = solution(str);
    printf("%s", ans);
}

char* solution(char* characters) {
    char* result = malloc(sizeof(char) * strlen(characters));
    int result_len = 0;
    result[0] = characters[0];
    result_len++;
    for (int i = 1; i < strlen(characters); i++) {
        if (characters[i - 1] != characters[i]) {
            result[result_len] = characters[i];
            result_len++;
        }
    }
    result[result_len] = NULL;  //마지막에 널삽입
    return result;
}
