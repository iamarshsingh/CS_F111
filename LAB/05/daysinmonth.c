//Displays the number of days in a month
#include <stdio.h>

int main(){
	int month;
	printf("Please enter month number :- ");
	scanf("%d",&month);		//scaning the month number
	
	if(month==1 || month==3 || month==5 || month==7 || month==9 || month==10 || month==12){
		printf("Number of days in this month is 31");
	}
	else if(month==4 || month==6 || month==8 || month==11 ){
		printf("Number of days in this month is 30");
	}
	else if(month==2){
		printf("Number of days in this month is 28");
	}
	else{
		printf("Please enter a valid month number");
	}
	
	return 0;
}
