
#include<stdio.h>
#include "mymath.h"
int main(int argc,char*argv[])
{
	int result,r,m,d;
	result = sum(10,30);
	r = sub(10,5);
	m = mul(2,7);
	d = div(4,2);
	printf("sum of two numbers are : %d\n",result);
	printf("sub of two numbers are : %d\n",r);
	printf("mul of two numbers are : %d\n",m);
	printf("div of two nubers are : %d\n",d);
	return 0;
}

