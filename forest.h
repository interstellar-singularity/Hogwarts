#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	//1. ���i�P��檺��O  2.�]��ù�P��S���٫�  3. �ĩԥ��E�v�ܭ��L���p���X
	//4.���[�P���ҩ��Ҫ����M  5.ù�®R�P�p��J�Ҫ����a  6.ù�®R�P�p��J�Ҫ����a
	//7.�s����   
int pr[7]; 
struct name{
	char n[30];
};
struct name prname[7] = {
	{"���i�P��檺��O"},{"�]��ù�P��S���٫�"},{"�ĩԥ��E�v�ܭ��L���p���X"},
	{"���[�P���ҩ��Ҫ����M"},{"ù�®R�P�p��J�Ҫ����a"},{"�R�N�g"},{"�s����"}
};
struct stuname E[10] = {
	{"�T�Y����"},{"���u�k�s"},{"�T�H"},{"�I���Q�����s"},{"�H��"},{"�K������"},{"�����H"},{"���H"},{"�D��"},{"�ʨg�]"}
};
void forest(struct playerdata **d2, int **e) {
	int ranesc;
	int mhp, matk, mdef, a;
	srand(time(NULL));
	printf("�A��ܤF�T�Ҵ˪L...");
	a = getchar();
	a = getchar();
	printf("�m����@����...");
	a = getchar();
	printf("�ݤ���e�誺�� ���A�P��ܤ��w...");
	a = getchar();
	printf("���ĿW�椤 �ԳذԳت���K�n���H���R...");
	a = getchar();
	printf("���G...�n��...����D���u?...");
	a = getchar();
	printf("�����X�ϧA�[�ָ}�B �o���F�M�@�n...");
	a = getchar();
	int leave;
	printf("�M�I�Y�N���{�A�A�T�w�n�~��ܡH\n");
	printf("1.�~��  ���N�Ʀr��.���}\n");
	scanf("%d",&leave);
	while(leave == 1 && (*d2)->hp > 0){
		printf("�X�{�F ");
		int r = 1 + rand() % 10;
		printf("%s", E[r - 1].name);
		switch(r) {
			case 1 :
				mhp = 5;
				matk = 5;
				mdef = 5;
				break;
			case 2 :
				mhp = 11;
				matk = 11;
				mdef = 11;
				break;
			case 3 :
				mhp = 13;
				matk = 13;
				mdef = 13;
				break;
			case 4 :
				mhp = 17;
				matk = 17;
				mdef = 17;
				break;
			case 5 :
				mhp = 19;
				matk = 19;
				mdef = 19;
				break;
			case 6 :
				mhp = 23;
				matk = 23;
				mdef = 23;
				break;
			case 7 :
				mhp = 29;
				matk = 29;
				mdef = 29;
				break;
			case 8 :
				mhp = 31;
				matk = 31;
				mdef = 31;
				break;
			case 9 :
				mhp = 37;
				matk = 37;
				mdef = 37;
				break;
			case 10 :
				mhp = 41;
				matk = 41;
				mdef = 41;
				break;
		} 
		int choice;
		while((*d2)->hp > 0 && mhp > 0){
			float Hp = (*d2)->hp;
			float Atk = (*d2)->atk;
			float Def = (*d2)->def;
			printf("\n\n%s����O��\nHP : %d   ATK : %d   def : %d\n", E[r - 1].name, mhp, matk, mdef);
			printf("�A����O��\nHP : %.2f   ATK : %.2f   def : %.2f\n", Hp, Atk, Def);
			
			printf("�o�� �A����ܬO 1. ���� 2. ���m 3. �k�]");
			if(r == 10 && (*d2)->P == 4)printf(" 4.�@�k�{��");
			printf("\n");
			scanf("%d", &choice);
			int s = 1 + rand() % 2;
			switch(choice){
				case 1 :
					printf("\n�A��ܤF����%s\n",E[r - 1].name);
					if(s == 1){//���~���� 
						(*d2)->hp = (*d2)->hp - matk;
						if(r == 10){//�p�G���~�O�ʨg�]
							printf("�A��������%s�L��", E[r - 1].name);
							printf("�A����F%d�I�ˮ`\n",matk);
							if((*d2)->hp <= 0){
								printf("�ݩ� �A�Q%s�����F�I�Ш��]�k�ө��C\n", E[r - 1].name);
								(*d2)->hp = 0;
							}
							break;//���} 
						} 
						if((*d2)->hp > 0){
							mhp = (float)mhp - (*d2)->atk;
							printf("%s����%.2f�I�������I\n",E[r - 1].name,(*d2)->atk);
							printf("�A�]����F%d�I�ˮ`\n",matk);
						}
						else {
							printf("�ݩ� �A�Q%s�����F�I�Ш��]�k�ө��C\n", E[r - 1].name);
							(*d2)->hp = 0;
						}
					}
					else{//���~���m 
						if(r == 10){
							printf("�A��������%s�L��", E[r - 1].name);
							break;
						}
						if(mdef- (*d2)->atk > 0){
							printf("%s�����פU�A������\n",E[r - 1].name);
						}
						else{
							mhp = (float)mhp - ((*d2)->atk - mdef);
							float tatk = (*d2)->atk - mdef;
							printf("%s���m�A�����¨���%.2f�I�ˮ`\n",E[r - 1].name,tatk);
						}
					}
					break;
				case 2 :
					printf("\n�A��ܤF���m\n");
					if(s==1){
						if(r == 10){
							printf("�A�����m��%s�L��", E[r - 1].name);
							(*d2)->hp = (*d2)->hp - matk;
							printf("�A����F%d�I�ˮ`\n",matk);
							if((*d2)->hp <= 0){
								printf("�ݩ� �A�Q%s�����F�I�Ш��]�k�ө��C\n", E[r - 1].name);
								(*d2)->hp = 0;
							}
							break;//���} 
						}
						if(matk > (*d2)->def){
							(*d2)->hp = (*d2)->hp - ((float)matk - (*d2)->def);
							printf("�ͩR�Ȩ��¨���%.2f�I�ˮ`\n",(float)matk - (*d2)->def);
						}
						else{
							printf("�A�פU��誺�����I\n");
						}
					}
					else{
						printf("%s�]�O��ܨ��u\n����Ƴ��S�o��",E[r - 1].name);
					}
					break;
				case 3 :
				{
					int max = (*d2)->esc + 20;
					ranesc =  1 + rand() % max;
					if (ranesc <= (*d2)->esc){
						printf("���Q�k���F...\n");
						mhp = -1;
						break;
					}
					else {
						printf("�k�]���ѡI\n");
						if(s == 1){
							(*d2)->hp = (*d2)->hp - matk;
							printf("�A����F%d�I�ˮ`\n",matk);
							if((*d2)->hp <= 0){
								printf("�ݩ� �A�Q%s�����F�I�Ш��]�k�ө��C\n", E[r - 1].name);
								(*d2)->hp = 0;
							}
						}
						else{
							printf("%s��ܨ��u�A�������A�k�]\n",E[r - 1].name);
						}
					}
					break;
				}
				case 4 : 
					if((*d2)->P == 4 && r == 10){
						printf("\n�y�e�e�A�@�k�{���I�z\n");
						printf("�ʨg�]���}�F�I\n");
						mhp = 0;
						int i = 1 + rand() % 2;
						if(i == 1){
							pr[6]  = pr[6] + 1;
						printf("%s�����F%s�I\n",E[r-1].name,prname[6].n);
						}
					}
					else {
						printf("�S���o�ӿﶵ\n");
					}
					break;
				default:
					printf("�S���o�ӿﶵ\n");
			}
		}
		if((*d2)->hp <= 0){
			
			break;
		}
		else if((*d2)->hp > 0 && choice != 3){
			int i = 1 + rand() % 100;
			if(i > 50){
				int rc =  1 + rand() % 3;
				for(i = 0; i < rc; i++){
					int j = 0 + rand() % 6;
					pr[j] = pr[j] + 1; 
					printf("%s�����F%s�I\n",E[r-1].name,prname[j].n);
				}
			}
			
		}
		printf("\n�U�@�ӦM�I�Y�N���{�A�A�T�w�n�~��ܡH\n");
		printf("1.�~��  ���N�Ʀr��.���}\n");
		scanf("%d",&leave);
	}
	if((*d2)->hp == 0){
		printf("�A��HP�����A�Ш��]�k�ө��ɥR\n");
	}
}
