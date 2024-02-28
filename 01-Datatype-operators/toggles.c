
#include<stdio.h>
int toggleBits(int num, int pos)
{
	int mask = 1 << pos;
	return num ^ mask;
}
int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	number = toggleBits(number, 3);
	number = toggleBits(number, 4);
	number = toggleBits(number, 5);
	printf("Result: %d\n", number);
	return 0;
}
