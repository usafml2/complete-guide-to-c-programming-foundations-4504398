#include <stdio.h>

int main()
{
	struct date {
		int month;
		int day;
		int year;
	};
	struct person {
		struct date birthday;
		float height;
		char name[32];
	};
	struct person me = {
		{ 9, 10, 1956 },
		0.0018161,
		"Chuck Watkins"
	};

	printf("%s was born on %d/%d/%d and is %f kilometers tall\n",
			me.name,
			me.birthday.month,
			me.birthday.day,
			me.birthday.year,
			me.height
		  );
			
	return 0;
}
