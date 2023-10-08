#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 32;
	int num;
	int attempts = 0;
	
	do
	{
		printf("Guess a number :");
		scanf("%d", &num);
		attempts++;
		
		if(num > answer)
			printf("low!");
		else if(num < answer)
			printf("high!");
		else
			printf("congratulation! trials :(&attempts)");
	
	}
	while (num != answer);
		
	system("PAUSE");
	return 0;
}
