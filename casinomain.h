#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"
#include"gamerule.h"
void casinomain(int *money){
	int ch;
	printf("�w��Ө�a�U���...('...'����Enter�~��)\n");
	ch = getchar();
	printf("�Ө�o��A�A�i��@�i�P�I...");
	ch = getchar();
	printf("���]�i����ɮa����...");
	ch = getchar();
	printf("�@�ӹC���A�@�M�W�h...");
	ch = getchar();
	printf("�U�n�A����`...");
	ch = getchar();
	printf("�@�����O�P�R�B����M�Y�N�i�}...\n");
	int option = 0;//�ﶵ�i�Ѭd�� 	
	gamerule();
	game(&money);	
	while(*money > 0) {
		printf("\n1.�d�ݱz�{�������B\n");
		printf("2.�~��D�ԹC��\n");
		printf("3.���}�a�U���\n");
		printf("�п�J�ﶵ?");
		scanf("%d", &option);
	
		switch(option) {
			case 1:
				printf("\n�z�{�������B��%d\n", *money);
				if(*money > 0 && *money <= 100) {
					printf("\n�A�֯}���F!�n���U�^�A�ӬD�ԧa?\n");
				}
				else{
					printf("\nHey,cmon!\n");
					printf("�A�Ӥ@���a!\n");
				}
				break;
			case 2:
				if(*money <= 0) {
					printf("\n�ܿ�ѡA�A�w�g�}���F�A�ڭ̥u�n�ЧA���}�C\n");
					break;
				}
				game(&money);
				break;
		}
		if(option == 3)break;
		if(option == 2 && *money <= 0)break;
		int catch_you = 0;
		catch_you = rand() % 5 + 1;
		if(catch_you == 1) {
			*money = *money/2; 
			printf("�V�|!�A�Q�o�{�F!\n���H�h�K���б¡A�����ǥͥX�S�b�a�U����A�W���k�����ڡA�A���F�@�b�����B�C");
			break;
		}
	}
	
	
}
