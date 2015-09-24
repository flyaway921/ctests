//test for string
#include <stdio.h>
static char* i = "I love games";
int main(int argc, char* argv[], char* envp[]){
	char* s = "hello world\t this is my program!";
	char* t = "hello world\t this is another program!";
	char a = 'a';
	printf("s:%s\n",s);
	printf("s:%p\n",s);
	printf("t:%p\n",t);
	printf("a:%c\n",a);
	printf("i:%p\n",i);

}
