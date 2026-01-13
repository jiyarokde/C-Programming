#include <stdio.h>

int main() {
	int n, i, num;
	int posSum = 0, negSum = 0;
	
	//print f enter the valve
	scanf("%d" , &n);

	//input array element
	for(i = 0; i < n; i++) {
		scanf("%d" , &num);
		if (num > 0)
			posSum += num;
		else if(num < 0)
			negSum += num;
	}

	//output
	printf("%d\n" , posSum);
	printf("%d\n" , negSum);

	return 0;
}