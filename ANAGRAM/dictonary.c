#include<stdio.h>
#include<string.h>
int main()
{
	int  i , j ;
	char str1[100], temp ;
	 printf("enter the string : ");
	scanf("%s" ,str1);
	//len1 = strlen(str1);
	for(i=0 ; str1[i]!= '\0' ; i++)
	{
		for(j=i+1 ; str1[j]!= '\0' ; j++)
		{
			if(str1[i]>str1[j])
			{
				temp = str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
		}
	}
	 printf("sorted array:");

	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str1[i]);
	
	}
	printf("\n");
	return 0 ;
}
