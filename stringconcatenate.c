#include<stdio.h>

int main(){
	char a[100];
	printf("Enter the first string:");
	gets(a);
	int lengthfirststring=0;
	for(int i=0;a[i]!='\0';i++)
	{
		lengthfirststring++;
	}
	char b[100];
	printf("Enter the second string:");
	gets(b);
	int lengthsecondstring=0;
	for(int i=0;b[i]!='\0';i++)
	{
		lengthsecondstring++;
	}
	int t=lengthsecondstring+lengthfirststring;
	char c[t];
	int k=0;
	for(int i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(int i=lengthfirststring;i<t;i++)
	{
		c[i]=b[k];
		k++;
	}
	c[t]='\0';
	printf("The concatenated string:");
	printf("%s",c);
	return 0;
}