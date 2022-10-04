#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x, y;
	char op;
	int sum;
	
	// int 정수형이어서 소수점 잘 안 나와도 ok 
	printf("enter the calculation : ");
	scanf("%d %c %d", &x, &op, &y); 
	
	if (op == '+')
		sum = x + y;
	else if (op == '-')
		sum = x - y;
	else if (op == '*')
		sum = x * y;
	else
		sum = x / y; 
		
//	switch(op)
//	{
//		case '+':
//			sum = x+y;
//			break;
//			
//		case '-':
//			sum = x-y;
//			break;
//			
//		case '*':
//			sum = x*y;
//			break;
//			
//		default:
//			sum = x / y;
//			break;
//	}
	
	printf(" = %i\n", sum);
	
	return 0;
}
