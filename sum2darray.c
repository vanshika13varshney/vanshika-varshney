#include<stdio.h>
int main()
{
	int n,m,sum=0;
	printf("enter rows and column\n");
	scanf("%d %d",&n,&m);
	int a[n][m],i,j;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the value at %d %d",i,j);
			scanf(" %d ", &a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum=sum+a[i][j];
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	printf(" sum = %d ",sum);
	return 0;
}
