//program to check number is even or odd
#include<stdio.h>

int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n%2==0) {
		printf("that number is even");
	}
	else{
		printf("that number is odd");
	}
}