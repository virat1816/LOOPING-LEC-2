#include <stdio.h>

int main(){ 
	int i,n;
	i =1;
	
	printf("Enter the value of N: ");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}
	
	while(i <= n);

	return 0;
}
