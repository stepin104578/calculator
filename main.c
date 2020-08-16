#include <stdio.h>
#include <stdlib.h>

	typedef int (*fptr_a)(int, int);
	typedef int (*fptr_d)(int,int);

	int sum(int, int);
	int diff(int, int);

	int sum(int x, int y) { return x + y; }
	int diff(int x, int y) { return x - y;}
	int main()
	{
        int a = 20, b = 10, c, d;

        int (*fun_ptr_a)(int, int) = sum;
        printf("Sum = %d",fun_ptr_a(a,b));

        int (*fun_ptr_d)(int, int) = diff;
        printf("\nDifference = %d",fun_ptr_d(a,b));

    }
