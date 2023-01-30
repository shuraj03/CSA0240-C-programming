#include<stdio.h>
int main(){
	int a,b,*p,*q,sum;
	printf("enter the value of a:-");
	scanf("%d",&a);
	printf("enter the value of b:-");
	scanf("%d",&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("the sum is %d",sum);
}
