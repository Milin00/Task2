#include<stdio.h>

int loop(int a)
{
	int a = 0;
	scanf("%d", &a);
	int answer = 1;
	for (int i = 0; i < 5; i++)
	{
		answer *= answer;
	}
	return answer;
}

int main()
{
	int x, y, z;
	int answer = loop(x) * loop(y) * loop(z);
}