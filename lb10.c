#include<stdio.h>

void DisplayRangeRev(int iStart,int iEnd)
{

	int iCnt=0;
	for(iCnt=iEnd;iCnt>=iStart;iCnt--)
	{
		printf("%d\n",iCnt);
	}

}

int main(int argc,char * argv[])
{
	int iFirst=0,iLast=0,iRet;

	printf("Enter the first and last number->");
	scanf("%d%d",&iFirst,&iLast);
	printf("reverse order between %d to %d->\n",iFirst,iLast);
	DisplayRangeRev(iFirst,iLast);

return 0;
}
