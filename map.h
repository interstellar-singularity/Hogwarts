#include<stdio.h>
#include"course.h"
#include"task.h"
#include"restaurant.h"
#include"forest.h"
#include"Magicstore.h"
int taskfi = -1;//taskfi = -1 �������ȡFtaskfi = 0 ���������ȡFtaskfi = 1 ���ȧ��� 
int tt = -1;//tt = -1 �S�����ȡF��L�Ƭ����Ƚҵ{�N�� 
int tcc[8];//���ȶi�� 
int tc[8];//���ȥؼ� 
int gonef = 0;//�O�_�h�L�˪L(hp�O�_��max): 0���_�A1���O 

//1�Ův�j�ԫe�F0���`���A�F2�_����
int snape = 1;
int Albus = 1;
int Cedric = 1;
int map(int t, struct charmain *m, int *energy, int *money, struct playerdata *pdata){

	int ch ;
	printf("\nMap:\n");
	int n;
	printf("1. ���a��T  2. �ǰ|�ҵ{  3. �ǥͦa�U���  4. �]�k�ө�  5.�\\�U  6.�T�Ҵ˪L  7.�ǰ|�б�  8.�D��ϥ�\n");
	scanf("%d",&n);
	switch(n){
		case 1 :
			if(gonef==0){
				return 1;
			}
			else if (gonef == 1){
				return -1;
			}	
		case 2 :
			if(*energy < 5){
				printf("��O����\n");
				break;
			}
			printf("1.�ܧξ� 2.���]�k���m�N 3.�ũG�� 4.�]�ľ� \n5.�Ѥ�� 6.�]�k�v 7.���ľ� 8.�e�R�� 9.���}\n");
			if(m->g + m->h + m->r + m->s >=232)printf("10.�S�O�ҵ{ : �@�k��\n");
			scanf("%d",&n);
			if(n == 9)break;
			course(n,t,&m, tt, tcc, &energy);
			break;
		case 3 :
			if(*money <= 0) {
				printf("�A���W�S�b����a?\n�O��ڭ̷�U�l�A�A�ڭ̳o�ण�w��A�o�ؤH�A�ֺu�a!");
				break;
			}
			return 3;
		case 4 :
			magicStore(&money, &m, &pdata);
			if(pdata->hp == pdata->hpmax)gonef = 0;
			break;
		case 5 :
			if(*energy >= pdata->emax)printf("�A�w�g�Y���F�A�h���Ӥ@�U��O�A�ӧa�I\n");
			else {
				restaurant(&money, &energy);
				if(*energy > pdata->emax)*energy = pdata->emax;
			}
			break;
		case 6 :
			pdata->P = m->P; 
			gonef = 1;
			forest(&pdata, &energy);
			break;
		case 7 :
		{
			if(tt >= 0){ 
				if(tc[tt] <= tcc[tt]){//�ˬd���ȬO�_����
					taskfi = 1;
				}
			}
			int tem = tt;//�����������Ȥ����w�ҵ{ 
			tt = task(t,tc,&taskfi,&money,tcc,snape,tem);//tt�O�ҵ{�N�� 
			break;
		}
		case 8:
		{
			int i;
			//�L�X�D��W�� 
			for(i = 0; i < 7; i++){
				printf("%s  %d\n",prname[i].n, pr[i]);
			}
			//�p�G�s���夣���s�A�Y�i�ϥΡA�i��ܴ_���T�H���@ 
			if(pr [6] > 0){
				printf("�A�n�ϥ�\"�s����\"�ܡH(1.�O  ���N�Ʀr��.���})\n");
				scanf("%d",&i);
				if(i == 1 && (snape == 0 || Albus == 0 || Cedric == 0)){
					printf("�аݧA�n�_���֡H\n1.������E�H���Q�h\n2.�ɦ�Ǵ��E�ۤ��R\n3.��l�E�}����\n");
					printf("�п�J�ﶵ�G");
					scanf("%d",&i);
					if(i == 1){
						if(Albus == 2){
							printf("�L���۩O�I");
							return 8;
						}
						Albus = 2;
						//�C�_���@�H�A�s����N�|��� 
						pr[6] = pr[6]-1;
						printf("���ߡI�A�_���F������E�H���Q�h...");
						ch = getchar();
						printf("�L�N�����A�H�ͤ������i�h�o������...");
						ch = getchar();
						printf("�L�N�޾ɧA���V�A�Ʊ檺�Ův����\n\n");
					}
					else if(i == 2){
						if(snape == 2){
							printf("�L���۩O�I");
							return 8;
						}
						snape = 2;
						//�C�_���@�H�A�s����N�|��� 
						pr[6] = pr[6]-1;
						printf("���ߡI�A�_���F�ɦ�Ǵ��E�ۤ��R...");
						ch = getchar();
						printf("�L�N�����A�ͩR�������i�ίʪ����v�ίq��...");
						ch = getchar();
						printf("�åB�A�̱N�|�����L�Ҥ��ͪ�����...\n\n");
					}
					else if(i == 3){
						if(Cedric == 2){
							printf("�L���۩O�I");
							return 8;
						}
						Cedric = 2;
						//�C�_���@�H�A�s����N�|��� 
						pr[6] = pr[6]-1;
						printf("���ߡI�A�_���F��l�E�}����...");
						ch = getchar();
						printf("�L�N�����A�̦n���B��...");
						ch = getchar();
						printf("�L�|�V�A���ɥL�ͩR�̪����...\n\n");
					}
					else{
						printf("�S���o�Ӧ���/n");
					}
				}
			}
			
			
			return 8;
		}
			
	}
	return 0;
}
