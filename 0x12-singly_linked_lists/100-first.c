#include <stdio.h>
/**
 * before_main - prints from init by the loader before main
 */
 void before_main() __attribute__((constructor));
 void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
