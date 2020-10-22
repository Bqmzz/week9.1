#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void total(int c, int m, int f)
{
	if (c > 20)
	{
		printf("\n !! Collect Score error !!\n");
	}
	if (m > 40)
	{
		printf("\n !! Midterm Score error !!\n");
	}
	if (f > 40)
	{
		printf("\n !! Final Score error !!\n");
	}

	int a, b;
	a = c + m;
	b = a + f;
	printf("Total Score is %d\n",b);
	if (b < 0 || b > 100) {
		printf("Error");
	} else if (b >= 80) {
		printf("Grade A !!!");
	} else if (b >= 70) {
		printf("Grade B");
	} else if (b >= 60) {
		printf("Grade C");
	} else if (b >= 50) {
		printf("Grade D");
	} else {
		printf("Grade F");
	}
}

int main()
{
	printf("----- Total Score = 100 -----\n");
	printf("Collect Score/20 :: Midterm Score/40 :: Final Score/40\n");
	int* collectScore, * midtermScore, * finalScore, c, m, f;
	collectScore = &c;
	midtermScore = &m;
	finalScore = &f;
	char totalScore[3][20] = { "Collect Score","Midterm Score", "Final Score" };
	int i;
	int j[3];
	for (i = 0; i < 3; i++)
	{
		printf("Enter %s : ", totalScore[i]);
		scanf_s("%d", &j[i]);
	}
	total(j[0], j[1], j[2]);
	return 0;
}