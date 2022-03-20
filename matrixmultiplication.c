#include<stdio.h>

int main(){
	int n=0;
	int m=0;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int k=0;
	int l=0;
	scanf("%d %d",&k,&l);
	int b[k][l];
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<l;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(m!=k)
	{
		printf("Matrix Multiplication not possible\n");
	}
	else
	{
		int c[n][l];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<l;j++)
			{
				c[i][j]=0;
				for(int d=0;d<m;d++)
				{
					c[i][j]+=a[i][d]*b[d][j];
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<l;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}