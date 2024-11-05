


#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d", &a);
    b = a % 10;
    c = a / 100;
    d = (a /10) % 10;
	printf ("%d", b*c*d);
	return 0;
}

