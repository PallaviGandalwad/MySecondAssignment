#include<stdio.h>



int   Factorial(int iNo)
{
 	int iAns=1;
	if(iNo<0)
	{
	return ;
	}
	while(iNo > 0)
	{ 
	iAns=iAns*iNo;
	printf("%d \n",iAns);
	 
	iNo--;
	}

return iAns;
}

int main(int argc,char* argv[])
{
	int iValue=0 ,iRet=0;
	printf("Enter the value\n");
	scanf("%d",&iValue);


	iRet=Factorial(iValue);
	printf("factorial is->%d",iRet);

return 0;
}
