#include<stdio.h>

int main(){
	FILE *fp,*fp1,*fp2;
	char c;
	fp=fopen("test.txt","r");
	fp1=fopen("test1.txt","r");
	fp2=fopen("test2.txt","w");
	while((c=fgetc(fp))!=EOF)
	{
		fputc(c,fp2);
	}
	while((c=fgetc(fp1))!=EOF)
	{
		fputc(c,fp2);
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	return 0;
}