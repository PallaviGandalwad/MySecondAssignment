#include<stdio.h>
int SumRange(int iStart,int iEnd)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		iSum=iSum+iCnt;
		//printf("%d",iSum);
	}
return iSum;
}
int main(int argc,char * argv[])
{
	int iFirst=0,iLast=0,iRet;

	printf("Enter the first and last number->");
	scanf("%d%d",&iFirst,&iLast);

	iRet=SumRange(iFirst,iLast);

	printf("Addition between %d to %d is->%d\n",iFirst,iLast,iRet);
return 0;
}
