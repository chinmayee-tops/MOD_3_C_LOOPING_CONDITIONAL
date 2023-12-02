// series : (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>

main() 
{ 
    int n, i, sq=1;

    printf("\n\n\t Input a positive integer : ");
    scanf("%d",&n);

	printf("\n\n\t");
	
	for(i=1;i<=n;++i) 
	{
        printf(" (%d * %d) ", i, i);
    }
	
	printf("\n\n\t");
    for(i=1;i<=n;++i) 
	{
        sq*=i;
        printf(" %d * ", sq);
    }
} 

