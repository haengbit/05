#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int cnt = 0; // count 
	
	printf("input a string: ");
	scanf("%d", &c);
	
	while ((c = getchar()) != '\n') // 입력 문자가 개행문자가 나올 때까지 반 
	{
		if (c >= '0' && c <= '9' ) // 입력된 글자가 숫자인가?
			cnt = cnt + 1; // 그렇다면 하나를 센다 -> 숫자를 셀 수 있는 변수 하나 더 필요 
	}
	
	printf("the number of digits is %i\n", cnt);
	return 0;
}
