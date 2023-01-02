#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>
int solution(int number);

void main() {
	int ans;
	ans = solution(13);  // 13Àº 4¹ø Ä§
	printf("%d", ans);
}


int solution(int number) {
	int count = 0;
		for (int i = 1; i <= number; i++) {
			int current = i;
			while (current != 0) {
				if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) {
					count++;
				}
				current /= 10;
			}
		}
	return count;
}
