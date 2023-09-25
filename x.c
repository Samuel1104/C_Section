/* To try how to find where a variable is stored in memory using the & operator.
 * To store the address with a pointer variable.
 */

#include <stdio.h>

int main()
{
	int x = 4;
	printf("x lives at %p\n", &x);

	int *address_of_x = &x;
	printf("%d\n", *address_of_x);
	return 0;
}
