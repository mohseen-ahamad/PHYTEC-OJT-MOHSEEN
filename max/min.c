
#include<stdio.h>
int findMin(int *numbers,int size)
{
	int min = *numbers;
	int *ptr = numbers;
	for(int i = 1;i < size;i++)
	{
		ptr++;
		if(*ptr < min)
		{
			min = *ptr;
		}
	}
	return min;
}
int main()
{
	int numbers[] = {10,5,20,15,60};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int min = findMin(numbers,size);
	printf("The minimum value is:%d\n",min);
	return 0;
}

