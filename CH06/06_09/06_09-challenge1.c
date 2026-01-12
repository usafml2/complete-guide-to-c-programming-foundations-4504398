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
			 .0018161f,
			 {9, 10, 1956}
			};
	printf("%s is %.8f kilometers tall and was born on %d/%d/%d.\n",
				 individual.name,
				 individual.height,
				 individual.birthday.month,
				 individual.birthday.day,
				 individual.birthday.year);

	return 0;
}
