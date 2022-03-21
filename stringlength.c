#include<stdio.h>

int main(){
	char a[100];
	printf("Enter the string:");
	scanf("%s",a);
	int l=0;
	for(int i=0;a[i]!='\0';i++)
	{
		l++;
	}
	printf("The length of the string is:%d",l);
	return 0;
}