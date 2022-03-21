#include<stdio.h>

int stringComparer(char a[],char b[],int c,int d)
{
	if(c==d)
	{
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]!=b[i])
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int main(){
	char a[100];
	printf("Enter the first string:");
	fgets(a,sizeof(a),stdin);
	int lengthfirststring=0;
	for(int i=0;a[i]!='\0';i++)
	{
		lengthfirststring++;
	}
	char b[100];
	printf("Enter the second string:");
	fgets(b,sizeof(b),stdin);
	int lengthsecondstring=0;
	for(int i=0;a[i]!='\0';i++)
	{
		lengthsecondstring++;
	}
	if(stringComparer(a,b,lengthfirststring,lengthsecondstring))
	{
		printf("The strings are equal\n");
	}
	else
	{
		printf("The strings are not equal\n");
	}
	return 0;
}