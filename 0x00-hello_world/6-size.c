#include <stdio.h>
/**
 * main: The main function
 * Description - Prints the size of various data types
 * Return: (0)
 */
int main(void)
{
	int my_int;
	char mychar;
	float myfloat;
	long int long_int;
	long long int longer_int;

	printf("Size of a char: %ld byte(s)\n", sizeof(mychar));
	printf("Size of an int: %li byte(s)\n", sizeof(my_int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(longer_int));
	printf("Size of a float: %ld byte(s)\n", sizeof(myfloat));

	return (0);
}
