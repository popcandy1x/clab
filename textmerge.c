#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp,*fs,*ft,*fm;
	char ch[80];
	char chh;
	fp=fopen("test1.txt","w");
	if(fp==NULL)
	{
		printf("cannot open file");
	}
	printf("Enter the contents of the first file:\n");
	while(strlen(gets(ch))>0)
	{
		fputs(ch,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	fs=fopen("test2.txt","w");
	if(fs==NULL)
	{
		printf("cannot open file");
	}
	printf("Enter the contents of the second file:\n");
	while(strlen(gets(ch))>0)
	{
		fputs(ch,fs);
		fputs("\n",fs);
	}
	fclose(fs);
	fm=fopen("test1.txt","r");
	ft=fopen("test.txt","w");
	if(ft==NULL)
	{
		printf("cannot open file");
	}
	while(1)
	{
		chh=fgetc(fm);
		if(chh==EOF)
		{
			break;
		}
		fputc(chh,ft);
	}
	fclose(ft);
	fclose(fm);
	fm=fopen("test2.txt","r");
	ft=fopen("test.txt","a");
	if(ft==NULL)
	{
		printf("cannot open file");
	}
	while(1)
	{
		chh=fgetc(fm);
		if(chh==EOF)
		{
			break;
		}
		fputc(chh,ft);
	}
	fclose(fm);
	fclose(ft);
	return 0;
}