/*this is test
*/
#include <stdio.h>
#include "my_var.h"
#define MAX 100

void scan_number(int* num)
{
	scanf("%d", num);
	
}

void test1(){
	printf("**************test1**************\n");
	int i=100;
	for(;i>0;i--){
		int num = get_random_int(MAX);
		printf("the random number: %d\n",num);
	}
}

void test2(){
	printf("**************test2**************\n");
	printf("My birthday is:%s\n",BIRTHDAY);
	printf("My phone number is:%s\n",PHONE);
}

int main()
{
	//test1();
	test2();
}
