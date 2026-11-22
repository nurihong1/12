#include <stdio.h>


struct student {
	int    ID;
	char   name[10];
	double grade;	
};
void main(void) {
	struct student s1={123456, "Juyeop", 4.2};
	struct student s;
	
	printf("Input the ID: ",s.ID);
	scanf("%i", &s.ID);
	printf("Input the name: ",s.name);
	scanf("%s", &s.name);
	printf("Input the grade: ",s.grade);
	scanf("%lf", &s.grade);
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f", s.grade);
	return 0;
}