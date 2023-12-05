#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char *a[3]={" ","*"};
	for(int k=1;k<=n;k++)
	{
	
		for(int i=1;i<=n-k;i++)
		{
			printf("%s",a[0]);
		}
		for(int j=1;j<=2*k-1;j++)
			printf("%s",a[1]);
		printf("\n");
	}
	int k=n-1;
	for(;k>=1;k--)
	{
	
		for(int i=1;i<=n-k;i++)
		{
			printf("%s",a[0]);
		}
		for(int j=1;j<=2*k-1;j++)
			printf("%s",a[1]);
		printf("\n");
	}
	
	
	return 0;
}