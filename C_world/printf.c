#include <stdio.h>
int main(void)

/*
 *This program shows format specifications including the use of the following:
 *The Argument list, The Width Option, Percent, Filling the Extra Space, The Justify Opti *on, The Zero-Fill Option, Fun with Plus Signs, The Invisible Plus Sign, Plus, Space
 *and Zero
 */

{
	int age;
        age = 25;
        printf("I am %d years old\n", age);
	
	/*The Argument List*/

	int x = 5, y = 10;
        printf("x is %d and y is %d\n", x, y);

	/*Percent*/

	printf("%d\n", 0);
	printf("%d\n", -7);
	printf("%d\n", 1560133635);
	printf("%d\n", -2035065302);
	
	/*The Width Option*/

	printf("%5d\n", 0);
	printf("%5d\n", -7);
	printf("%5d\n", 1560133635);
	printf("%5d\n", -2035065302);

	/*The Justify Option,the output goes to the left and is padded out with spaces.
	 * There is no padding for longer numbers and they are not shortened.
         */

	printf("%-5d\n", 0);
	printf("%-5d\n", -7);
	printf("%-5d\n", 1560133635);
	printf("%-5d\n", -2035065302);

	/*The Zero-Fill Option*/

	printf("%05d\n", 0);
	printf("%05d\n", -7);
	printf("%05d\n", 1560133635);
	printf("%05d\n", -2035065302);

	/*Fun with Plus Sign*/

	printf("%+5d\n", 0);
	printf("%+5d\n", -7);
	printf("%+5d\n", 1560133635);
	printf("%+5d\n", -2035065302);

	/*Plus, Space and Zero*/

	printf("%+05d\n", 0);
	printf("%+05d\n", -7);
	printf("%+05d\n", 1560133635);
	printf("%+05d\n", -2035065302);

	return(0);
}


