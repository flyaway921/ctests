#include <stdio.h>
#include <stdlib.h> //because use srand
#include <time.h>

int get_random_int(int MAX)
{
	int num;
	int seed;
	time_t t;
	time(&t);
	seed = (unsigned)t;
	srand(seed);
	return rand() % MAX;	
}

//this is the acurate function defination
void scan_number(int* num)
{
	scanf("%d", num);
	
}
