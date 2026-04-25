#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//int answer = 5;

	int t = (int)time(nullptr);

	int answer = t % 10;
	printf("%d\n", answer);

	int input;
	scanf_s("%d", &input);
	int rank = 0;
	bool game=true;

	while (game)
	{
		int input;

		if (scanf_s("%d", &input) != 1)
		{
			printf("数値を入れてください\n");
			rank = 0;
			while (getchar() != '\n');
		}
		else if (answer == input)
		{
			printf("一致\n");
			rank = 2;
		}
		else if ((answer - input) >= -3 && (answer - input) <= 3)
		{
			printf("惜しい\n");
			rank = 1;
		}
		else
		{
			rank = 3;
		}

		switch (rank)
		{
		case 2:
				printf("ランクS\n");
				game = false;
				break;
		case 1:
			printf("ランクA\n");
			break;
		case 0:
			printf("論外\n");
			break;
		default:
			printf("ランクB\n");
		}
	}


	return 0;
}