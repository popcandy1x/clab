#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	char str[80];
	char s[80];
	fp=fopen("test.txt","w");
	while(strlen(gets(s))>0)
	{
		fputs(s,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	fp=fopen("test1.txt","w");
	while(strlen(gets(str))>0)
	{
		fputs(str,fp);
		fputs("\n",fp);
	}	
	fclose(fp);
	return 0;
}