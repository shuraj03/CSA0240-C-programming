#include<stdio.h>
int main(){
	int a,b,*p,*q;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	p=&a;
	q=&b;
	if(*p>*q){
		printf("a is the max number");}
	else{
		printf("b is the max number");}
	}
