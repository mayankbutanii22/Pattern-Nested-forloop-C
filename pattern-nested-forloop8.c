#include <stdio.h>
int main()
 {
	int a,b;
    for(int a=5; a>=1; a--)
     {
    for(int b=1; b<=a; b++)
    {
     printf("%d ",b%2);
    }
    printf("\n");
  }
}