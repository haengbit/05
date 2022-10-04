#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input an integer : ");
	scanf("%d", &x);
	
	if (x > 0) // 양수인 경우 
		printf("It is a positive number.\n");
	else if (x < 0) // 음수인 경우 
		printf("It is a negative number.\n");
	else // 0인 경우 
		printf("It is zero.\n");
	return 0;
}
