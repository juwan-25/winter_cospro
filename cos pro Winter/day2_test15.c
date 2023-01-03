#include <stdio.h>

int solution(int score[], int scores_len)
{
	int cnt = 0;
	int current = 0;
	while (current<scores_len) {
		current += score[cnt];
		cnt++;
	}
	return cnt;
}

int main()
{
	int scores[6] = { 2,5,1,3,2,1 };
	int scores_len = 6;
	printf("µµÂø±îÁö È½¼ö : %d", solution(scores, scores_len));
	return 0;
}