#include<stdio.h>
int main()
{
	int sum = 1;
	int n = 1;
	int round = 2;
	int diagonals;
	printf("Enter diagonal : ");
	scanf_s("%d", &diagonals);
	while (n < diagonals * diagonals)
	{
		for (int i = 0; i < 4; i++)
		{
			n += round;
			sum += n;
		}
		round += 2;
	}
	printf("%d ", sum);
}