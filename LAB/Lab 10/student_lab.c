#include <stdio.h>
#include "student_func2.h"

int main()
{
    int snum,gnum;	
    student s[100];
    printf("This is the program to manage Student Records:\n");
    
    printf("\nTesting reading of records:\n");
    snum = scanf_students(s);
    printf("\nNumber of student details stored in the records are %d",snum);

    printf("\nTesting printing of records:\n");
    snum=printf_students(s);
    printf("\nTotal number of records printed : %d \n",snum);

    printf("\nTesting reading of records again:\n");
    snum=scanf_students(s);
    printf("\nNumber of student details stored in the records are %d",snum);
    
    printf("\n\nTesting printing of records before generating valid college ID\n");
    snum=printf_students(s);

    printf("\nGenerating college email if the attribute has value as \"Empty\"");
    gnum = generate_email(s);

    printf("\n%d college ID's generated",gnum);
    
    printf("\n\nTesting printing of records after generating valid college ID\n");
    printf_students(s);
	
    return 0;
	
}
