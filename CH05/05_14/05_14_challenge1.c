#include <stdio.h>

int add (int a, int b)
{
	printf("%d + %d = %d\n",a,b,a+b);
	return 0;
}
int subtract (int a, int b)
{
	printf("%d - %d = %d\n",a,b,a-b);
	return 0;
}
int multiply (int a, int b)
{
	printf("%d * %d = %d\n",a,b,a*b);
	return 0;
}
float divide (int a, int b)
{
	return (float)a / (float)b;
}



int main()
{
	int a,b;

	printf("Enter two whole numbers, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	add(a,b);
	subtract(a,b);
	multiply(a,b);
	printf("%d / %d = %f\n",a,b,divide(a,b));
	
	return 0;
}
