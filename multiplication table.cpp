#include<stdio.h>
int main(){
	int m,n,i;
	printf("enter the value of m:");
	scanf("%d",&m);
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d*%d=%d\n",i,m,i*m);
	
}
