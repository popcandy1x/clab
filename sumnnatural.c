#include<stdio.h>

int nNaturalSum(int);

int main(){
	int n=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The sum of first %d natural numbers is:",n);
	printf("%d\n",nNaturalSum(n));
	return 0;
}

int nNaturalSum(int n){
	if(n==1)
	{
		return 1;
	}
	return n+nNaturalSum(n-1);
}