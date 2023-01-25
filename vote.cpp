#include <stdio.h>
int main()
{
	int vote,a;
	printf("Enter your age:-");
	scanf ("%d",&vote);
	if (vote>17)
	{
		printf("You are eligible to Vote");
	}
	else 
	{
		a=18-vote;
		printf("You are allowed to vote after %d years",a);
	}
}
