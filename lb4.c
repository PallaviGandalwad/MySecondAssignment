#include<stdio.h>
float Avg(int iNo1,int iNo2,int iNo3)
{
	float fAns=0.0f;

	fAns=iNo1+iNo2+iNo3/3;

	return fAns;
}

int main(int argc ,char* argv[])
{
	int iValue1=0,iValue2=0,iValue3=0,iRet=0;
	
	printf("Enter the three number\n");
	scanf("%d%d%d",&iValue1,&iValue2,&iValue3);


	iRet=Avg(iValue1,iValue2,iValue3);

	printf("Average is %d",iRet);

return 0;
}
