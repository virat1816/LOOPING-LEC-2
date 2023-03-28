#include<stdio.h>

int main(){
	int n,i,fact=1;

	printf("Enter last number:");
	scanf("%d",&n);
	 i=1;
	 do{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	
	printf("factorial: %d",fact);
	return 0;
}
