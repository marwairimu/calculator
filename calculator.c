#include <stdio.h>
int main()
{
	int sum,numm1,numm2,diff,product,quotient;
	printf("Enter two numbers:" );
	scanf("%d %d ",&numm1, &numm2);
	sum=numm1+numm2;
	diff=numm1-numm2;
	product=numm1*numm2;
	quotient = (float) numm1/numm2;
	printf("%d + %d = %d\n", numm1, numm2, sum);
	printf("%d - %d = %d\n", numm1, numm2, diff);
	printf("%d * %d = %d\n", numm1, numm2, product);
	printf("%d / %d = %d\n", numm1, numm2, quotient);
	
	return 0;
}