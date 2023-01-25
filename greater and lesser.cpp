#include<Stdio.h>
int main(){
	int a,b,*p,*q;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	p=&a;
	q=&b;
	if(*p>*q){
		printf("%d is the maximum number",*p);
	}
	else{
		printf("%d is the maximum number",*q);
	}
}
