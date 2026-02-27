// Challenge objectives Part 1
// 1. Create a file called hello.txt for output.
// 2. Prompt the user to enter their name and read it into a variable.
// 3. Write the user's name to the hello.txt file.
// 4. Output "[NAME] has written to hello.txt file"
// 5. Close the file.
// Challenge objectives Part 2
// 1. Reopen the file for reading.
// 2. Read in the single line of text from the file,
// and store it in a variable.
// 3. Output the text read from the file to the console.
// 4. Add comments to the code to explain what each line does.

#include <stdio.h> // Include the standard input/output library
// for file operations and console I/O.

int main()
{
	const char filename[] = "hello.txt"; // Define a constant character
	// array to hold the filename.

	printf("Enter your name: ");
	char name[100]; // Declare a character array to hold the user's name.
	scanf("%s", name);

	FILE *file = fopen(filename, "w"); // Open the file for writing.
	if (file == NULL) // Check if the file was opened successfully.
	{
		printf("Error opening file for writing.\n");
		return 1; // Exit the program with an error code.
	}

	fprintf(file, "%s\n", name); // Write the user's name to the file.
	// fprintf is used to format the output to the file.
	printf("%s has written to %s file\n", name, filename); // Output a message
	// indicating that the name has been written to the file.
	
	fclose(file); // Close the file.

	fopen(filename, "r"); // Reopen the file for reading.
	if (file == NULL) // Check if the file was opened successfully.
	{
		printf("Error opening file for reading.\n");
		return 1; // Exit the program with an error code.
	}

	// Read the single line of text from the file and store it in a variable.
	char read_name[100];
	fgets(read_name, sizeof(read_name), file); // Read a line from the file.
	printf("Text read from the file: %s", read_name); // Output the text read
	// from the file to the console.
	fclose(file); // Close the file after reading.

	return 0;
}
