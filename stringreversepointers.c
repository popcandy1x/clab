#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Enter the string:");
	scanf("%s",a);
	int s=strlen(a);
	char *ptr;
	ptr=a+s-1;
	printf("The string in reverse:");
	for(int i=s-1;i>=0;i--)
	{
		printf("%c",*ptr);
		ptr--;
	}
	return 0;
}