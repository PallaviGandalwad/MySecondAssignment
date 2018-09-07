#include<stdio.h>

void DisplayRange(int iStart ,int iEnd)
{
	int iCnt=0;
	
	 
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		printf("%d\t",iCnt);
	}
 
}
int main(int argc,char* argv[])
{
	int iFirst=0,iLast=0;
	
	printf("Enter the first and last number->\n");
	scanf("%d%d",&iFirst,&iLast);

	DisplayRange(iFirst,iLast);
return 0;
}
