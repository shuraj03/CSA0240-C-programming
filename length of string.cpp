#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int a;
	printf("input a string:");
	scanf("%s",&str);
	a=strlen(str);
	printf("the length of string is :%d",a);
}
