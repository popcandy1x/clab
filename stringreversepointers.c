#include<stdio.h>
#include<string.h>

void reverse(char a[],int n){
	char *ptr,*ctr;
	ptr=a;
	ctr=&a[n-1];
	char t;
	for(int i=0;i<n/2;i++)
	{
		t=*(ptr);
		*(ptr)=*(ctr);
		*(ctr)=t;
		ptr++;
		ctr--;
	}
}

int main(){
	char a[100];
	printf("Enter the string:");
	scanf("%s",a);
	int s=strlen(a);
	reverse(a,s);
	printf("The string in reverse:%s",a);
	return 0;
}