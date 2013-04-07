/*
 1
4 5
 2
6 7
 3
 */

const char* T = "|O6VYNnX~^";

void line(char** a, int u, int v) {
	char *c = a[1];
	while(*c) {
		int y = T[*c++-48]+1;
		
		printf("%c", y & u ?   *T : 32);
		printf("%c", y & v ?   '_' : 32);
		printf("%c", y & u*2 ? *T : 32);
		printf("%c", c[0] ?    ' ' : '\n');
	}
}

int main(int y, char **a) {
	line(a, 0, 1);
	line(a, 8, 2);
	line(a, 32, 4);

	return 0;
}

