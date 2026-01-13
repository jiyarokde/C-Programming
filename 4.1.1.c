#include <stdio.h>

struct Distance{
int feet;
float inch;
};

int main() {
	struct Distance d1,d2,d3;
	// take first distance input
	printf("Enter 1st distance \n");
	printf("feet: ");
	scanf("%d",&d1.feet);
	printf("inch: ");
	scanf("%f",&d1.inch);
	
	// take second distance input
	printf("Enter 2nd distance \n");
	printf("feet: ");
	scanf("%d",&d2.feet);
	printf("inch: ");
	scanf("%f",&d2.inch);
	
	// adding distances
	d3.feet=d1.feet +d2.feet;
	d3.inch=d1.inch + d2.inch;
	// convert inches to feet if greater than 12
	if(d3.inch>=12.0){
		d3.feet += (int)(d3.inch/12);
		d3.inch = d3.inch - 12 * (int)(d3.inch/12);
	}
	printf("Sum of distances = %d\'-%.1f\"", d3.feet, d3.inch);
	return 0;
}