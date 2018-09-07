#include<stdio.h>

void Binary(int iNo)
{
	int iReminder=0,iBinary=0,i=1;
	
	while(iNo!=0)
	{
	iReminder =iNo % 2;//0
	
	iNo =iNo / 2;//6
	
	

	iBinary=iBinary + (i * iReminder);//0+(1*0)

	i=i*10;
	}

	printf("Binary number is->%d\n",iBinary);

}
int main(int argc,char* argv[])
{
	int iValue=0;
	
	printf("Enter the Decimal number->\t");
	scanf("%d",&iValue);

	Binary(iValue);
	
return 0;
}
