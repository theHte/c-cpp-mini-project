#include <stdio.h>

int main ()
{

	int i;
    int n;
    int t1 = 0;
	int t2 = 1;
	int next;

	printf("Enter number: ");
	scanf("%d", &n);

	printf("Fibonacci serie\n");

	for (i = 1; i <= n; i++) {

		printf("%d, ", t1);

		next = t1 + t2;

		t1 = t2;

		t2 = next;
	}

	return 0;
}
