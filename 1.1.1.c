#include <stdio.h>
int main(){
	int Side, Area;

	//Prompt the input
	printf("Side: ");
	scanf("%d", &Side);

	//Calculate.area
	Area = Side * Side;

	//Output
	printf("Area of square: %d\n", Area);

	return 0;
}