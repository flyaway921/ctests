#include <stdio.h>
#include <string.h>

main()
{
	printf("%d",drand48());
	printf("please type a range\n");
	char range[20];
	scanf("%s",range);
	printf("\nguess range is between 0-%s\n",range);
	double drandom = drand48();
	printf("\ndrandom:%f\n",drandom);
	printf("\natoi:%d\n",atoi(range));
	double drange = drandom * atoi(range);
	int irange = (int)drange;

	char strrange[20];
	sprintf(strrange,"%d",irange);
	printf("\n%s\n",strrange);

	int flag = 1;
	while(flag)
	{
		printf("\nplease type your number:");
		char b[20];
		scanf("%s",b);
		if(strcmp(strrange,b) == 0)
		{
			flag = 0;
			printf("bingo !\n");
		}
	}


}
