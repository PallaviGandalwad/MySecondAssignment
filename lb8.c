#include<stdio.h>

void DisplayRangeOdd(int iStart,int iEnd)
{
	int iCnt=0;
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		//printf("%d\t",iCnt);
		if(iCnt % 2)
		{
		printf("%d\t",iCnt);
		}
	}
}
int main(int argc,char* argv[])
{
	int iFirst=0,iLast=0;
	printf("Enter the First and last number->");
	scanf("%d%d",&iFirst,&iLast);

	DisplayRangeOdd(iFirst,iLast);
return 0;
}
