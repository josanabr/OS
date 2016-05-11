#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	int x = 0, y = 0;
	x = 3;
	y = 4;
	if (fork() == 0) {
		x = 5;
	} else {
		x = 4;
	}
	printf("%d + %d = %d\n", x, y, x + y);
}
