/*
 1
4 5
 2
6 7
 3
 */

#include <stdio.h>

void line(char** a, int u, int v) {
	char *c = a[1];
	while(*c) {
		int y = ("|O6VYNnX~^")[*c++-48]+1;
		
		printf("%c%c%c%c",
			   y & u ?   '|' : 32,
			   y & v ?   '_' : 32,
			   y & u*2 ? '|' : 32,
			   c[0] ?    ' ' : '\n');
	}
}

int main(int y, char **a) {
	line(a, 0, 1);
	line(a, 8, 2);
	line(a, 32, 4);

	return 0;
}

