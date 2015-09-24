/*this is a guessing game
9.10 generate a random number(int) and print it to screen
9.23
*/
#include <stdio.h>
#include <stdlib.h> //because use srand
#include <time.h>
#define MAX 100

void scan_number(int* num)
{
	scanf("%d", num);
	
}

int main()
{
	int num = get_random_int(MAX);
	printf("guess a number between 0 and %d\n",MAX);
	int my_number;
	printf("your number:");
	//scanf("%d", &my_number);
	scan_number(&my_number);
	while(my_number != num){
		if (my_number > num){
			printf("bigger than the real number, guess again\n");
		}else{
			printf("smaller than the real number, guess again\n");
		}
		printf("your number:");
		//scanf("%d", &my_number);
		scan_number(&my_number);
	}
	printf("bingo!\n");
}

