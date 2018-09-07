#include<stdio.h>
float Circum(float fRadius)
{
	float fCircumfarenceOfCircle=0.0f;

	fCircumfarenceOfCircle=2*3.14*fRadius;
	
	return fCircumfarenceOfCircle;
}
int main(int argc ,char* argv[])
{
	float fRadius=0.0f,fRet=0.0f;

	printf("Enter the Radius of circle->\t");
	scanf("%f",&fRadius);
	
	fRet=Circum(fRadius);

	printf("Circumferance of Circle is ->%f",fRet);

	return 0;
}
