#include <stdio.h>

void magicStore(int **money, struct charmain **m, struct playerdata **d){

	int ch;
	struct stuname acc[8] = {
	{"�����l���ͻH"},{"�����n�}"},{"���l���}"},{"��Ī����\\"},
	{"�����y"},{"�]��"},{"�]�k����"},{"�߷Q��"}
	} ;
	int opt;
	//�e�|�ӼW�[hp,��|�ӹD��W�[g.s.r.h 
	printf("�w����{�Ө�ר���111���]�k�ө�...");
	ch = getchar();
	ch = getchar();
	printf("�H�U�O�ڭ̪��ӫ~�G\n");
	ch = getchar();
	printf("\n1.%s $25\n  HP + 10\n\n2.%s $35\n  HP + 20\n",acc[0].name,acc[1].name);
	printf("\n3.%s $40\n  HP + 25\n\n4.%s $1500\n  HP�[��\n",acc[2].name,acc[3].name);
	printf("\n5.%s $50\n  ���ܤ��h���� + 5\n\n6.%s $50\n  �v�ӭ��L���� + 5\n",acc[4].name,acc[5].name);
	printf("\n7.%s $50\n  �p��J�ҫ��� + 5\n\n8.%s $50\n  ���ҩ��ҫ��� + 5\n",acc[6].name,acc[7].name);
	scanf("%d",&opt);

	switch(opt){
		case 1:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n�A���ͩR�O�R�K�A�h�԰���A�ӧa�I\n");
				break;
			}
			if(**money >= 25){
				(*d)->hp = (*d)->hp + 10; 
				if((*d)->hp > (*d)->hpmax){
					(*d)->hp = (*d)->hpmax;
				}
				printf("Your HP is %.2f now\n",(*d)->hp);
				**money = **money - 25;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;
		case 2:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n�A���ͩR�O�R�K�A�h�԰���A�ӧa�I\n");
				break;
			}
			if(**money >= 35){
				(*d)->hp = (*d)->hp + 20;
				if((*d)->hp > (*d)->hpmax){
					(*d)->hp = (*d)->hpmax;
				} 
				printf("Your HP is %.2f now",(*d)->hp);
				**money = **money - 35;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;
		case 3:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n�A���ͩR�O�R�K�A�h�԰���A�ӧa�I\n");
				break;
			}
			if(**money >= 40){
				(*d)->hp = (*d)->hp + 25; 
				if((*d)->hp > (*d)->hpmax){
					(*d)->hp = (*d)->hpmax;
				}
				printf("Your HP is %.2f now",(*d)->hp);
				**money = **money - 40;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;
		case 4:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n�A���ͩR�O�R�K�A�h�԰���A�ӧa�I\n");
				break;
			}
			if(**money >= 1500){
				(*d)->hp = (*d)->hpmax; 
				printf("Your HP is %.2f now",(*d)->hp);
				**money = **money - 1500;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;	
		case 5:
			if(**money >= 50){
				(*m)->g = (*m)->g + 5;
				**money = **money - 50;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;
		case 6:
			if(**money >= 50){
				(*m)->s = (*m)->s + 5;
				**money = **money - 50;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;
		case 7:
			if(**money >= 50){
				(*m)->r = (*m)->r + 5;
				**money = **money - 50;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;
		case 8:
			if(**money >= 50){
				(*m)->h = (*m)->h + 5;
				**money = **money - 50;
			}
			else{
				printf("\n�A���������C\n");
			}
			break;
	}
}
