/*this is test
*/
#include <stdio.h>
//if without include my_var.h BIRTHDAY and PHONE will be undelceared variable
//but why the get_random_int() function can be triggered ?
//Is there any different between function and variable?
#include "my_var.h"


void test1(){
	printf("**************test1**************\n");
	int i=100;
	for(;i>0;i--){
		int num = get_random_int(MAX_RANGE);
		printf("the random number: %d\n",num);
	}
}

void test2(){
	printf("**************test2**************\n");
	printf("My birthday is:%s\n",BIRTHDAY);
	printf("My phone number is:%s\n",PHONE);
	printf("MAX_RANGE is:%d\n",MAX_RANGE);
}

int main()
{
	//test1();
	test2();
}
