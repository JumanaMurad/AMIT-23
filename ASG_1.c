#include <stdio.h>

int main()
{
	int a;
	printf("Enter the number \n");
	scanf("%d",&a);
	
	if(a&(0x01)) 
		printf("The number is odd = 1\nThe number is even = 0");
	else printf("The number is odd = 0\nThe number is even = 1");

	
	return 0;
}

