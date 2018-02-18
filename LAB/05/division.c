// students division calculator
#include <stdio.h>

int main(){
	int sub1,sub2,sub3,sub4,sub5,perc;
	
	printf("Please Enter Subject 1 marks out of 100 :- ");
	scanf("%d",&sub1);									//getting input from user
	
	printf("Please Enter Subject 2 marks out of 100 :- ");
	scanf("%d",&sub2);									//getting input from user
	
	printf("Please Enter Subject 3 marks out of 100 :- ");
	scanf("%d",&sub3);									//getting input from user
	
	printf("Please Enter Subject 4 marks out of 100 :- ");
	scanf("%d",&sub4);									//getting input from user
	
	printf("Please Enter Subject 5 marks out of 100 :- ");
	scanf("%d",&sub5);									//getting input from user
	
	perc=((sub1+sub2+sub3+sub4+sub5)/5);
	
	if(perc>=60)printf("The student passed with 1st Division.");
	else if(perc>=50)printf("The student passed with 2nd Division.");
	else if(perc>=40)printf("The student passed with 3rd Division.");
	else printf("The student failed.");
	
	return 0;
}
