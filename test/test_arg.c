#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[], char*envp[])
{
	printf("argc:%d\n",argc);	
	int i;
	for(i=0; i<argc; i++){
		printf("argv[%d]=%s\n",i,argv[i]);
	}

}
