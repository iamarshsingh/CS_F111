#include <stdio.h>
#include "student_func1.h"

int main()
{
    student s[100];
	printf("This is the program to manage Student Records:\n");
    
    printf("\nTesting reading of records:\n");
    
    int snum=scanf_students(s);
    printf("\nNumber of student details stored in the records are %d",snum);
    
    printf("\nTesting printing of records:\n");
    
    snum=printf_students(s);
    printf("\nTotal number of records printed : %d \n",snum);
	return 0;
	
}
