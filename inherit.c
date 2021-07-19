#include <stdio.h>

#define foo_s struct { int a; }
typedef foo_s foo;

typedef struct bar_s {
	foo_s; // extends foo_s
	int b;
} bar;

int main(void)
{
	bar b = {
		.a = 1,
		.b = 2,
	};
	foo *f = (foo *)&b;

	printf("a: %d\n", f->a);

	return 0;
}

