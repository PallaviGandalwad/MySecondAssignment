#include<stdio.h>

void SimpleIntrest(int Principle,int Time,int Rate)
{
	double dSimpleIntrest= 0.0;
	
	dSimpleIntrest=Principle*Rate*Time / 100;
	printf("Simple Intrest is ->%f",dSimpleIntrest);
//return dSimpleIntrest;
}
int main(int argc ,char* argv[])
{
	int iPrincipleAmount=0,iTime=0,iRate=0;
	
	printf("Enter the ->Principle Amount->");
	scanf("%d",&iPrincipleAmount);

	printf("Enter the ->Time->");
	scanf("%d",&iTime);

	printf("Enter the ->Rate->");
	scanf("%d",&iRate);
	
	SimpleIntrest(iPrincipleAmount,iTime,iRate);
return 0;

}


	

	
