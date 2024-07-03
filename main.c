#include <stdio.h>
#include "sub.h"
#include "Dir/sub2.h"

int main() {
	printf("Hello, world.\n");

	int sum = addAB(1, 2);
	printf("1 + 2 = %d\n", sum);

	int sub = subAB(2,1);
	printf("2 - 1 = %d\n", sub);

	return 0;
}
