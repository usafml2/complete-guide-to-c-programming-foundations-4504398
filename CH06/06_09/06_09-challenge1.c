#include <stdio.h>

struct person
{
	char name[50];
	float height;
	struct date
	{
		int month;
		int day;
		int year;
	} birthday;
};

int main()
{
	struct person individual = {
			"Chuck Watkins",
			 0.0018161,
			 {9, 10, 1956}};
	printf("name: %s, height: %.7f km, birthday: %d/%d/%d\n",
		individual.name,
		individual.height,
		individual.birthday.month,
		individual.birthday.day,
		individual.birthday.year
	);
	return 0;
}
