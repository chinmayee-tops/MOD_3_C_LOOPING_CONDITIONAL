//Series : (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>

main()
{
	int n,sum,sum1=0,i,j;

    printf("\nEnter value for n = ");
    scanf("%d",&n);
	printf("\n\n\t");
    for(i=1;i<=n;i++)
    {
            sum=0;
            for(j=1;j<=i;j++)
            {
                sum=sum+j;
                printf(" %d",sum);
            }
            sum1=sum1+sum;
    }

    printf("\nThe Sum of Series up to Value [ %d ] = [ %d ]\n",n,sum1);
}
