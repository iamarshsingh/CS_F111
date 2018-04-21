CP: student_lab.c student_operations.o student.h student_func2.h
	gcc -o CP student_lab.c student_operations.o
	echo "Creating an executable"
	
student_operations.o: student_operations.c
	gcc -c student_operations.c
	echo "Creating an object file"

clean:
	rm CP student_operations.o
	echo "removing the executable and object file"
