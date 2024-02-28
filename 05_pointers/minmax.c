#include<stdio.h>

int main()
{
	int a[] = {22,5,42,88,1,66};

	int min , max;
	int len = sizeof(a)/sizeof(a[10]);
	minmax(a, len, &min, &max);
	printf("min value is : %d\n" ,min);
	printf("max value is : %d\n" ,max);
	return 0;
}
void minmax(int arr[], int len, int *min, int*max)
{
	*min = *max = arr[0];
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i] > *max)
			*max = arr[i];
		if(arr[i] < *min)
			*min = arr[i];
	}
}



