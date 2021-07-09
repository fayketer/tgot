//program to find grade of student
#include<stdio.h>

int main()
{
	int a,b,c,average;
	printf("enter values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	
	average=(a+b+c)/3;
	
	printf("result of average is =%d\n",average);
	
		if (average>=70 && average<=100){
		printf("GRADE A");
	}
	 else  if(average>=60 && average<=69){
		printf("GRADE B");
	}
	else if(average>=50 && average<=59){
		printf("GRADE C");
	}
	else if(average>=40 && average<=49) {
		printf("GRADE D");
	}
	else if(average>=0 && average<=39) {
		printf("FAIL");
	}
}