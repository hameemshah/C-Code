#include<stdio.h>
#include<string.h>
struct state {
	char name[10];
	int population;
	int area;
	struct district {
		char d_name[10];
		int d_population;
		int d_area;
	}district;
};
int main () {
	struct state s1, s2, s3;
	strcpy(s1.name, "Chicago");
	strcpy(s2.name, "Dakota");
	strcpy(s2.district.d_name, "Pierre");
	printf("She lives in %s in the district of %s.", s2.name, s2.district.d_name);
	return 0;
}
