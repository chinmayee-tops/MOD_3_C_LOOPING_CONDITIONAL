//WAP to accept 5 numbers from user and display all numbers.

#include<stdio.h>

main()
{
	int i, a[5];
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Input A[%d] : ", i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n\t");
	for(i=0;i<5;i++)
	{
		printf(" A[%d] : %d", i, a[i]);
		printf("\n\n");
	}
}
