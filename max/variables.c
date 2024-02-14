
#include<stdio.h>
void rotateValues(int*a,int*b,int*c)
{
	int temp = *b;
	*b = *c;
	*a = temp;
	int main()
	{
		int a = 10,b = 5,c = 20;
		printf("Before rotation:a = %d,b = %d,c = %d\n",a,b,c);
		rotateValues(&a,&b,&c);
		printf("After rotation:a = %d,b = %d,c = %d\n",a,b,c);
		return 0;
	
	}
