#include<stdio.h>
 float rectangle(int l,int w);
int main()
{
	int length;
	int width;
	float ans;
	printf("enter the length of rectangle:");
	scanf("%d",&length);
	printf("enter the width of rectangle:");
	scanf("%d",&width);
	ans=rectangle(length,width);
	printf("the area of rectangle is%f",ans);
	return 0;
}

 float rectangle(int l,int w)
{
	float area;
	area=l*w;
	return area;
}