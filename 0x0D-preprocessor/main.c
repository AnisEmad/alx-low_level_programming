#include "3-function_like_macro.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x = ABS(-1);
	int y = ABS(0);
	int z = ABS(-98) * 10;
	printf("%d\n%d\n%d\n", x, y, z);
	return (0);
}
