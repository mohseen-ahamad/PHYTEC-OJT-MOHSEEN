
#include<stdio.h>
void binary(unsigned int num)
{
	unsigned int bitmask;
	unsigned int res;
	int i=16;
	while(i>=0)
	{
		bitmask=1<<i;
		res=num&bitmask;
		if(res == 0)
			printf("0");
		else
			printf("1");
		i--;
	}
	printf("\n");
}
int main()
{
	unsigned int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	binary(num);
}
