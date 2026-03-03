// Challenge Objectives
// 1. Use the presidents.dat database file
// 2. Read the 10 records stored in the
// file backwards.
// 3. Use the fseek() function to set the
// file position indicator.
// 4. Obtain each record from the file
// in reverse order.
// 5.Output each record, one after the other.
// 6. Borrow code from other exercises to use
// the same person sructure defined for creating the 
// presidents.dat file

#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat";
	FILE *fp;
	struct person	{
		char name[32];
		int inaguration;
		int age;
	} presidents[10] = {
			{"George Washington", 1789, 57},
			{"John Adams", 1797, 62},
			{"Thomas Jefferson", 1801, 58},
			{"James Madison", 1809, 58},
			{"James Monroe", 1817, 59},
			{"John Quincy Adams", 1825, 58},
			{"Andrew Jackson", 1829, 62},
			{"Martin Van Buren", 1837, 55},
			{"William Henry Harrison", 1841, 68},
			{"John Tyler", 1841, 51}
	};
	

	/* open the file */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	/* read records from back to front */
	for(  int x = 9; x >= 0; x-- )
	{
		fseek(fp, x * sizeof(struct person), SEEK_SET);// move the file position 
		// indicator to the correct record. x * sizeof(struct person) gives the
		// offset in bytes to the x-th record in the file. x * is used as the
		// index of the record we want to read. sizeof(struct person) gives
		// the size of one record in bytes. * is used as the multiplication 
		// operator to calculate the total offset in bytes.
		// fp is the file pointer,
		// and SEEK_SET indicates that the offset is from the beginning of the file.

		fread(&presidents[x], sizeof(struct person), 1, fp); // read the record from
		// the file into the presidents array at index x. &presidents[x] is the
		// address of the x-th element in the presidents array,
		// sizeof(struct person) is the size of one record,
		// and 1 indicates that we want to read one record.
		// fp is the file pointer.


			printf("%s was inaugurated in %d at the age of %d\n",
			presidents[x].name,
			presidents[x].inaguration,
			presidents[x].age);
	}



	/* clean-up */
	fclose(fp);
	return(0);
}


