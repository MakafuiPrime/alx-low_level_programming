#include <stdio.h>
#include "main.h"

void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}	

int main (void)
{
	putchar("Enter Value of a ");
	    scanf("%d", &a);
	    putchar("\nEnter Value of b ");
	    scanf("%d", &b);
	    swap(&a, &b);
	    putchar("\nAfter Swapping: a = %d, b = %d", a, b);
	    return 0;
}	
