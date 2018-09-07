#include<stdio.h>

void DisplayRangeEven(int iStart,int iEnd)
{
	int iCnt=0;

	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		 
		if(iCnt%2==0)
		{
	

		printf("%d\n",iCnt);
		}

	}
}
int main(int argc,char* argv[])
{
	int iFirst=0,iLast=0;
	printf("Enter the First and last number->");
	scanf("%d%d",&iFirst,&iLast);
	printf("Even Numbers ->\n");
	DisplayRangeEven(iFirst,iLast);
return 0;
}
