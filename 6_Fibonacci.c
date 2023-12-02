

/* WAP to print Fibonacci series up to given numbers  */

#include<stdio.h>
main()
{
	int i,j,k,n;
	
	printf("\n\n Input a number : ");
	scanf("%d",&n);
	
	i=0;
	j=1;
	printf("\n\n %d %d",i,j);
	
	k=i+j;
	while(k<=n)
	{
		printf(" %d",k);
		i=j;
		j=k;
		k=i+j;
	}
	
}
