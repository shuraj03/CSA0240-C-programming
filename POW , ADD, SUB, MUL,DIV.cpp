#include<stdio.h>
#include<math.h>
int main()
{
	int power,add,sub,mul,div,x,n,op;
	printf("Enter The Value of X:-");
	scanf("%d",&x);
	printf("Enter the value of N:-");
	scanf("%d",&n);
	printf("1=power\n2=add\n3=sub\n4=mul\n5=div\n");
	printf("Enter your choice:-");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			power=pow(x,n);
			printf("%d^%d=%d",x,n,power);
		case 2:
			add=x+n;
			printf("%d+%d=%d",x,n,add);
			break;
		case 3:
			sub=x-n;
			printf("%d-%d=%d",x,n,sub);
			break;
		case 4:
			mul=x*n;
			printf("%d*%d=%d",x,n,mul);
			break;
		case 5:
			div=x/n;
			printf("%d/%d=%d",x,n,div);
			break;
	}
	
}
