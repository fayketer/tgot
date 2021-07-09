//number is divisible by 17
#include<stdio.h>

int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%17==0) {
		printf("divisible by 17");
	}
	else{
		printf("not divisible by 17");
	}
}
