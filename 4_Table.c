//WAP to print table up to given numbers.

#include<stdio.h>
main()
{
	int n, i;
	
	printf("\n\n\t Input a number to print table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d",n, i, n*i);
	}
}
