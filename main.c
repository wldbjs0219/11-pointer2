#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i=10;
	int *ptr=&i;
	
	printf("i = %d, ptr = %p\n", i ,ptr);
	(*ptr)++;
	printf("i = %d, ptr = %p\n", i, ptr);
	*ptr++;
	printf("i = %d, ptr = %p\n", i, ptr);
	
	return 0;
}
