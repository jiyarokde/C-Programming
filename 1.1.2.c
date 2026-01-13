#include <stdio.h>

int main(){
	int num1, num2;

	//Input two integers
	scanf("%d", &num1);
	scanf("%d", &num2);

	//Perform arithmatic operations
	printf("%d\n", num1 + num2); //Additioon
	printf("%d\n", num1 - num2); //Subtraction
	printf("%d\n", num1 * num2); //Multiplication
	printf("%d\n", num1 / num2); //Division
	printf("%d\n", num1 % num2); //Modulus

	return 0;
}