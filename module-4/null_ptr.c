#include <stdio.h>
int main() {
	int num = 10;
	int *ptr1 = &num;
	int *ptr2=NULL;

	if(ptr1==0)
	{
		printf("ptr1: NULL\n");
	}
	else
	{
		printf("ptr1: NOT NULL\n");
	}

	if(ptr2==0)
		printf("ptr2: NULL\n");
	else
		printf("ptr2: NOT NULL\n");

	return 0;
}

