#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"wagerValue.h"
void game(int **bankbalance){
	int wager = 0; //���a�U����` 
	int number = 0; //�H���� 
	int counter ;
	srand(time(NULL));
	printf("\n�ФU��`: ");
	scanf("%d", &wager);
	while(wager > **bankbalance) {
		printf("�п�J���Ľ�`���B!\n");
		scanf("%d", &wager);
	}
	number = rand() % 1000 + 1; 
	int input = 0;//���a��J���q�� 
	counter = 1;//���a�q�������� 
	printf("�@�ӽd��b1~1000����\n");
	printf("�A�බ�Q�q����?\n");
	printf("�п�J�A���q��: ");
	scanf("%d", &input);
	while(input != number) {
		if(input > number) {
			printf("�Ӱ��F!�ЦA�դ@��\n");
		}
		else{
			printf("�ӧC�F!�ЦA�դ@��\n");
		}
		scanf("%d", &input);
		counter = counter + 1;
	}
	printf("�A�q���F!���ߧA!\n");
	printf("�z���q�����Ƭ�%d", counter);
	wager = wager_value(&wager, &counter);
	**bankbalance = **bankbalance + wager;
	
	
	puts("\n");
	

}
