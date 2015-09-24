#include <stdio.h>

int main()
{
	int a;
	int* ptr;
	int& aa = a; //reference
	a = 10;
	printf("a=%d\n",a);
	//change a's value via pointer
	ptr = &a;
	*ptr = 20;
	printf("a=%d\n",a);
	//change a's valuse via referene
	aa = 30;
	printf("a=%d\n",a);
	return 0;
}
