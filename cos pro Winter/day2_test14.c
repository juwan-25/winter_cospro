#include <stdio.h>
#include <malloc.h>

int* solution(int scores[], int scores_len)
{
	int* grade_counter = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		grade_counter[i] = 0;
	}

	for (int i = 0; i < scores_len; i++)
	{
		if (scores[i] >= 85) grade_counter[0]++;
		else if (scores[i] >= 70) grade_counter[1]++;
		else if (scores[i] >= 55) grade_counter[2]++;
		else if (scores[i] >= 40) grade_counter[3]++;
		else grade_counter[4]++;
	}
	
	return grade_counter;
}

int main()
{
	int scores[] = { 80, 90, 34, 20, 55, 76, 100 };
	int scores_len = 7;
	int* grade = solution(scores, scores_len);

	printf("점수 분포\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", grade[i]);
	return 0;
}