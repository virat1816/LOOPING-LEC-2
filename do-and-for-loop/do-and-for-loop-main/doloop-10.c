#include<stdio.h>

int main(){
	int n,i;

	printf("Enter last number:");
	scanf("%d",&n);
	 i=1;
	 do{
		printf("\n%d X %d = %d",n,i,n*i);
		i++;
	}
	while(i<=10);
	
	return 0;

}
