#include<stdio.h>
float circle (int r);
int main()
{
	int radius;
	float ans;
	printf("enter the radius of the circle:");
	scanf("%d",&radius);
	ans=circle(radius);
	printf("area of a circle is %f",ans);
	return 0;
}

float circle (int r)
{
	float area;
	area=3.14*r*r;
	return area;
}