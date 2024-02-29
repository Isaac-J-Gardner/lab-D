#include <stdio.h>
int main(void){
    
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen("number.txt", "r");
	if(fptr == NULL) { // display error if can't open file
        printf("Error. Not able to open the file.");
		return 1;
        }
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	

	// Your code below here
	printf("{\"name\": \"Isaac Gardner\",\n \"email\": \"isaac.gardner-2@student.manchester.ac.uk\",\n \"number1\": %.2f,\n \"number2\": %.3e}", num, num);
	
	
	// Do not edit below here
	return 0;
}