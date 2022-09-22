#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	unsigned long long factorial=1;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("error! please enter any positive integer");
	}
	else
	{
		for(i=1;i<=n;++i)
		{
			factorial=factorial*i;
		}
		printf("factorial of number %d = %llu",n,factorial);
	}
	return 0;
}
