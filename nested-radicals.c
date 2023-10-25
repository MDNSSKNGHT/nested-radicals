#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * Let A, B, C and D positive integer such that C
 * is the sum of A and B and D is the product of
 * A and B.
 *
 * sqrt(C + 2 * sqrt(B)) = sqrt(A) + sqrt(B)
 * 
 */
int main(int argc, char *argv[]) {
	int A, B, C, D;

	if (argc != 3) {
		fprintf(stderr, "Provide two integers as arguments!\n");
		exit(EXIT_FAILURE);
	}

	C = atoi(argv[1]);
	D = atoi(argv[2]);

	A = (C + sqrt((C * C) - (4 * D))) / 2;
	B = C - A;

	printf("sqrt(%d + 2 * sqrt(%d)) = sqrt(%d) + sqrt(%d)\n", C, D, A, B);
}

