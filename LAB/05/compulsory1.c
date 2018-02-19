//TO CALCULATE INTEREST
#include <stdio.h>

int main(){
	//declarations
	char prd;
	int age;
	float amount,duration,roi,interest;
	
	printf("Loan is for Car ('C') or House ('H') :-\n");
	scanf("%c",&prd);
	printf("\nCustomer Age:- \n");
	scanf("%d",&age);
	printf("\nLoan Amount (in INR):- \n");
	scanf("%f",&amount);
	printf("\nLoan Duration (in years):- \n");
	scanf("%f",&duration);
	printf("\nRate of Interest (% yearly):- \n");
	scanf("%f",&roi);
	
	if(age<25 && prd=='H')roi--;    //reduce roi by 1% for special case
	
	interest = (amount*roi*duration)/100;
	
	printf("Loan is for %c :-\n",prd);
	printf("\nCustomer Age is %d years.\n",age);
	printf("\nLoan Amount (in INR) is %.2f \n",amount);
	printf("\nLoan Duration is %d years\n",((int)duration));
	printf("\nRate of Interest is %.2f %% yearly\n",roi);
	printf("\nInterest is %.2f\n",interest);	
	
	return 0;
}