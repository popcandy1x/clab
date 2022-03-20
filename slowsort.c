#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=0;
	scanf("%d",&n);
	int *ptr;
	ptr=(int*)calloc(n,sizeof(int));
	printf("Enter the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	int t=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				t=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=t;
			}
		}
	}
	printf("The sorted array is:");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
	return 0;
}