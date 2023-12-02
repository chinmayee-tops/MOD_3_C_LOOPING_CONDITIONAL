/* Write a program to find out the max from given number 
(E.g., No: -1562 Max number is 6) */

#include<stdio.h>
main()
{
	int num, remider, Largest= 0;
	printf("\n\n\t Input the Number : ");
	scanf("%d", &num);

	while(num>0)
    {
		remider=num % 10;
		if (Largest<remider)
 		{
       		Largest=remider;
 		}
		num=num / 10;
    }
		printf("\n\n\t The Largest Digit is :%d", Largest);
}
