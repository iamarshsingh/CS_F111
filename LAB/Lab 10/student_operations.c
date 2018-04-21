#include <stdio.h>
#include "student.h"
#include <string.h>

int i=0;

int scanf_students(student s[]){
	int num;
	printf("Enter Number of Records to be entered: ");
	scanf(" %d",&num);
	char temp;
	for(int j=0;j<num;j++,i++){
		printf("Please enter User Name: ");
		scanf(" %s",s[i].name);
		printf("Please enter Student_ID: ");
		scanf(" %s",s[i].student_id);
		printf("Please enter College Email: ");
		scanf(" %s",s[i].college_email);
		printf("Please enter Personal Email: ");
		scanf(" %s",s[i].personal_email);
		printf("Please enter Hostel number: ");
		scanf(" %s",s[i].hostel_number);
		printf("Student %d Record added.\n\n",i+1);
		/*while(1){
			printf(" Would like to add more records(Y/N): ");
			scanf(" %c",&temp);
			if(temp=='Y'){
				break;
			}
			else if(temp=='N'){
				return i+1;
			}
			else{
				printf("Please Enter correct option.");
				while ((getchar()) != '\n');
				continue;
			}
		}*/
	}
	return i;
}

int printf_students(student s[]){
	int j;
	for(j=0;j<i;j++){
		printf("Student %d : \n",j+1);
		printf("UserName: %s \n",s[j].name);
		printf("Student ID: %s \n",s[j].student_id);
		printf("College Email: %s \n",s[j].college_email);
		printf("Personal Email: %s \n",s[j].personal_email);
		printf("Hostel Number: %s \n \n",s[j].hostel_number);
	}
	return j;
}

int generate_email(student s[]){
	int emails=0;
	for(int j=0;j<i;j++){
		if(strcmp(s[j].college_email,"Empty")==0){
			if(s[j].student_id[4]=='A' || s[j].student_id[4]=='B'){
				strcpy(s[j].college_email,"f");
			}
			else if(s[j].student_id[4]=='H'){
				strcpy(s[j].college_email,"h");
			}
			else strcpy(s[j].college_email,"p");
			strncat(s[j].college_email,s[j].student_id,4);
			strncat(s[j].college_email,&s[j].student_id[8],4);
			if(s[j].student_id[12]=='G'){
				strcat(s[j].college_email,"@goa.bits-pilani.ac.in");
			}
			else if(s[j].student_id[12]=='P'){
				strcat(s[j].college_email,"@pilani.bits-pilani.ac.in");
			}
			else if(s[j].student_id[12]=='H'){
				strcat(s[j].college_email,"@hyderabad.bits-pilani.ac.in");
			}
			else strcat(s[j].college_email,"@dubai.bits-pilani.ac.in");			
			emails++;
		}
	}
	return emails;
}
