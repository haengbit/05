#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x; // �޴� �Է¿� ���� ���� ���� 
	int trial = 0;
	
	do
	{
		printf("Guess a number : "); // �Է��ض� ���� ��� 	
		scanf("%d", &x);             // �Է��� ���� (scanf)
		if (x > answer)
			printf("high!\n");
		else if (x < answer)
			printf("low!\n");         // �Է� ���ڰ� ���亸�� ū�� ������ ��� - high/low
		trial++;
	}	
	while ( x != answer );           // ����� ������ ���� �Ǵ� 
	
	// �õ� Ƚ�� ���
	printf("Congratulation! trials : %i\n", trial); 
	return 0;
}
