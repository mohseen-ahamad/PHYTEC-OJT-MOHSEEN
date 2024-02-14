
#include<stdio.h>
void max_min()
{
	int a[10]={0,1,2,3,4,5,9,8,7,6};
	int i,min,max;
	max=min=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("The max number in given array is:%d\n",max);
	printf("The min number in given array is:%d\n",min);
}
int main()
{
	max_min();
}

