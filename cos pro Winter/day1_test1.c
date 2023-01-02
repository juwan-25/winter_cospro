#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * (shirt_size_len+1));

	for (int i = 0; i < shirt_size_len + 1; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i],"XS")==0) answer[0]++;
		else if (strcmp(shirt_size[i], "S") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "M") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "L") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "XL") == 0) answer[4]++;
		else answer[5]++;
	}
	

	return answer;

}

void main() {
	int* ans;
	char* shirtsize[] = { "XS", "S", "XXL", "XS", "XL" };
	ans = solution(shirtsize, 5);
	for (int i = 0; i < 6; i++) {  // 전달받은 배열 ans의 크기를 main 에서 알 수 없음
		printf(" %3d", ans[i]);
	}
}

