// To dispaly area of a circle
#include <stdio.h>
#include <math.h>
void main()
{
	float r, area=0;
	printf("Enter radius \t");
	scanf("%f",&r);
	area = 3.14*pow(r,2);
	printf("Area of the circlr =%f",area);
}
