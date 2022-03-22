#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char str[80];
	char str1[80];
	fp=fopen("Names.txt","w");
	if(fp==NULL)
	{
		puts("Cannot open file");
		exit(0);
	}
	printf("Enter the names:\n");
	while(strlen(gets(str))>0)
	{
		fputs(str,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	fp=fopen("Names.txt","r");
	if(fp==NULL)
	{
		puts("Cannot open file");
		exit(0);
	}
	while(fgets(str1,79,fp)!=NULL)
	{
		if(str1[0]=='R')
		{
			puts(str1);
		}
	}
	fclose(fp);
	return 0;
}