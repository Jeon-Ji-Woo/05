#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("Input an integer :");
	scanf("%d", &x);
	
	if (x>0)
		printf("양수입니다.\n");
	else if (x<0)
		printf("음수입니다.\n");
	else
		printf("0입니다.\n");
	
	return 0;
}
