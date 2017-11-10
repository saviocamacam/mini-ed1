#include <stdio.h>
#include <stdlib.h>

void test(int valor){
	if(valor>0)
		printf("A Terra é plana!\n");
	else if(valor<0)
		printf("A Terra é redonda!\n");
	else
		printf("A Terra é oval!\n");
}
