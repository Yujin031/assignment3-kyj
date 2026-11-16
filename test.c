#include <stdio.h>

void main_01() {
	char a;
	a = 'K';

	char b[4];
	b[0] = 'K';
	b[1] = 'B';
	b[2] = 'S';
	b[3] = '\0';

	printf("a = %c \n", a);
	printf("b = %s \n", b);

}