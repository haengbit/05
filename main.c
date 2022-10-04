#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input an integer : ");
	scanf("%d", &x);
	
	if (x < 0) // 음수인 경우 
		x = x * -1;
	printf("The absolute value is %i.\n", x);
		
	return 0;
}
