#include<stdio.h>
int main()
{
	int i,j,rep;
	printf("\t-----Multiplication Table------\n");
	printf("Enter number of times you want to run:");
	scanf("%d",&rep);
	for(i=1;i<=rep;i++){
		printf("%d:",i);
		for(j=1;j<=10;j++){
			printf(" %d",i*j);
		}
		printf("\n");
	}
	
}
