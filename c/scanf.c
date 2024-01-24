#include <stdio.h>
int main()
{
	int age;
	float gpa;
	char grade;
	printf("what ist thoust age maggot: \n");
        scanf("%i", &age);
	printf("what ist thoust average grade of the point variety: \n");
	scanf("%f", &gpa);
	printf("what ist thoust letter attributed to academic wellness: \n");
	scanf(" %c", &grade);
	printf(" thine age is %i, thine grade of the point variety ist %f, thoust letter of academic wellness ist %c, are these correct? does not matter. denied.\n", age, gpa, grade);
	return 0;	
}
