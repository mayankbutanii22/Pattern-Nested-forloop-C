#include<stdio.h>
main()
{
	int a=1;
	int b=1;
	
	
	for(a=1; a<=5; a++){
		for(b=1; b<=a; b++){
			printf("%d ",a-b+1);
		}
	       printf("\n");
    }
}