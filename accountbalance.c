#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char another='Y';
	struct acbalance{
		int accountno;
		int balance;
		char name[80];
	}e1;
	fp=fopen("accountbalance.txt","w");
	while(another=='Y')
	{
		printf("Enter account no,balance and name:");
		scanf("%d %d %s",&e1.accountno,&e1.balance,e1.name);
		fprintf(fp,"%d %d %s\n",e1.accountno,e1.balance,e1.name);
		printf("Add another record(Y/N):");
		fflush(stdin);
		another=getchar();
	}
	fclose(fp);
	return 0;
}