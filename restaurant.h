#include <stdio.h> 
void restaurant(int **money,int **energy){
	int ch ;
	int choose;
	printf("�g�L�@��Ѫ���ܡA�Q���A�w�g�S�j�S�֤F...");
	ch = getchar();
	ch = getchar();
	printf("������I�����ɥR��q�a!");
	ch = getchar();
	
	printf("\n1.���o��s $15\n  energy + 7\n\n2.������ $20\n  energy + 11\n");
	printf("\n3.���J�O�� $25\n  energy + 17\n\n4.�f�����f���� $30\n  energy + 22\n");
	printf("\n5.�j�_�W�Ūw�w�} $33\n  energy + 26\n"); 
	scanf("%d",&choose);
	
	if(choose == 1 || choose == 2 || choose == 3 || choose == 4 || choose == 5){
		switch(choose){
			case 1 :
				if(**money >= 15){
					printf("�ܤF�o�M��������ŷx���ߪ��C�@�B\n");
					**money = **money - 15 ;
					**energy = **energy + 7 ;	
				}
				else{
					printf("\n�A���������C\n");
				}
				break;
			case 2 :
				if(**money >= 20){
					printf("�ɥR�J�ս観�q���鰷�d!\n");
					**money = **money - 20 ;
					**energy = **energy + 11 ;
				}
				else{
					printf("\n�A���������C\n");
				}
				break;
			case 3 :
				if(**money >= 25){
					printf("�@�اΦ��C��|���ʪ����J�O�A�����i�j�����d��\n");
					**money = **money - 25 ;
					**energy = **energy + 17 ;
				}
				else{
					printf("\n�A���������C\n");
				}
				break;
			case 4 :
				if(**money >= 30){
					printf("�̭������l�f���d�_�ʩǡA�p�G���J�O�f���B�Ӧm�}�f���B����f���B�իˤf������\n");
					**money = **money - 30 ;
					**energy = **energy + 22 ;
				}
				else{
					printf("\n�A���������C\n");
				}
				break;
			case 5 :	
				if(**money >= 33){
					printf("�Y��������Ͼ�өж��R���Ŧ⭷�a���C�⪺�w�w�A�X�ѳ����|�}����!\n");
					**money = **money - 33 ;
					**energy = **energy + 26 ;
				}
				else{
					printf("\n�A���������C\n");
				}
				
				break;
		}
	}
	else{
		printf("�A��ܪ����b���W\n");
	}
	
}
