#include<stdio.h>
int main(){
	int p,q,r;
	printf("p:");
	scanf("%d",&p);
	printf("q:");
	scanf("%d",&q);
	printf("r:");
	scanf("%d",&r);
	for(p>0;q>0;p<q;++p){
		if(p-r<=p){
			continue;
		}
	else{
		printf("numbers are:",p);
		break;
	}
	}
}
