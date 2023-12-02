/* WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers  */

#include<stdio.h>

main()
{
	int i, a[5], even, odd, e_sum, o_sum;
	
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
	
	printf("\n ................... ");
	for(i=0;i<5;i++)
	{
			if(a[i]%2==0)
			{
				e_sum=e_sum+a[i];
				even++;
				printf("\n\n a[%d] : %d is even",i, a[i]);
				
			}
				
			else
			{
				o_sum=o_sum+a[i];
				odd++;
				printf("\n\n a[%d] : %d is odd",i, a[i]);
			}
			
		
	}
	printf("\n ............................ ");
	printf("\n\n a. Total even numbers are  : %d",even); 
	printf("\n\n b. Total odd numbers are  : %d",odd); 
	printf("\n\n c. Sum of even numbers are  : %d",e_sum); 
	printf("\n\n d. Sum of odd numbers are  : %d",o_sum); 
}
