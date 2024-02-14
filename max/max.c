
#include<stdio.h>
int findMax(int*numbers,int size)
{
	int max = *numbers;
	int *ptr = numbers;
	for(int i = 1;i < size;i++)
	{
		ptr++;
		if(*ptr > max)
		{
			max = *ptr;
		}
	}
	return max;
}
int main()
{
	int numbers[] = {10,5,20,15,25};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int max = findMax(numbers,size);
	printf("The maximum value is: %d\n",max);
	return 0;
}

