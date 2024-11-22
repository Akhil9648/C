#include<stdio.h>
int main()
{
	int a,b,rem,x=1,GCD=1;
	printf("Enter the numbers to find Gcd:\n");
	scanf("%d %d",&a,&b);
	while(1)
	{
		rem=a%b;
		if(rem==0)
		{
			GCD=b;
			break;
		}
		else
		{
			a=b;
			b=rem;
		}
		
	}
	printf("\nGCD is:%d",GCD);
	return 0;
}
