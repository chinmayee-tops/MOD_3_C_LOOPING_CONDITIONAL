//Accept 3 numbers from user using while loop and check each numbers palindrome.

#include<stdio.h>
main()
{
	int a,b,c,x;

    printf("\n\n\t Enter a three digit number : ");
    scanf("%d",&a);

    x=a%10;
    a=a/10;
    b=a%10;
    c=a/10;

    if (x==c)
       printf("\n\n\t It is PALINDROME. ");
    else
       printf("\n\n\t It is NOT PALINDROME. ");
}
