#include <stdio.h>
#include <string.h>

int main()
{
	int quantity = 12;
	char item[] = "fish umbrellas";
	float price = 78.66f;
	float total = quantity * price;

	printf("You have purchased %d %s at $%.2f each.\nThe total cost is %.2f\n", quantity, item, price, total);

			return 0;
}
