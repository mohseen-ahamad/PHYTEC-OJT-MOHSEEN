// Online C compiler to run C program online
#include <stdio.h>
int add(int, int);

int main() 
{
    int x, y, z;
    
    printf("enter the 2 numbers : ");
    scanf("%d  %d" ,&x , &y);
    
    z = add(x, y);
    
    printf("z = %d" ,z);
    
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
