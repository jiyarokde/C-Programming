#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};

// Structure definition to track the type of data stored in the union
struct Temp {
    enum Type type;
    union Data data;
};
int main() {
	struct Temp v1, v2;

	scanf("%d", &v1.data.integer);
	v1.type = INTEGER;

	int ch;
	while (getchar() != '\n')
		;

	scanf("%f", &v2.data.floating_point);
	v2.type = FLOATING_POINT;
	if (v1.type == INTEGER){
		printf("%d\n", v1.data.integer);
	}else if(v1.type == FLOATING_POINT){
		printf("%F\n", v1.data.floating_point);
	}
	if(v2.type == INTEGER){
		printf("%d\n", v2.data.integer);
	}
	else if(v2.type == FLOATING_POINT){
		printf("%.1f\n", v2.data.floating_point);
	}
	return 0;
}