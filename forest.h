#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	//1. 湯姆·瑞斗的日記  2.魔佛羅·剛特的戒指  3. 薩拉札‧史萊哲林的小金匣
	//4.海加·赫夫帕夫的金杯  5.羅威娜·雷文克勞的王冠  6.羅威娜·雷文克勞的王冠
	//7.龍之血   
int pr[7]; 
struct name{
	char n[30];
};
struct name prname[7] = {
	{"湯姆·瑞斗的日記"},{"魔佛羅·剛特的戒指"},{"薩拉札‧史萊哲林的小金匣"},
	{"海加·赫夫帕夫的金杯"},{"羅威娜·雷文克勞的王冠"},{"娜吉妮"},{"龍之血"}
};
struct stuname E[10] = {
	{"三頭巨犬"},{"瑞典短吻龍"},{"狼人"},{"匈牙利角尾龍"},{"人馬"},{"八眼巨蛛"},{"食死人"},{"巨人"},{"蛇妖"},{"催狂魔"}
};
void forest(struct playerdata **d2, int **e) {
	int ranesc;
	int mhp, matk, mdef, a;
	srand(time(NULL));
	printf("你選擇了禁忌森林...");
	a = getchar();
	a = getchar();
	printf("置身於濃霧中...");
	a = getchar();
	printf("看不到前方的路 讓你感到很不安...");
	a = getchar();
	printf("踽踽獨行中 啪喀啪喀的木枝聲打碎寧靜...");
	a = getchar();
	printf("似乎...好像...有兩道視線?...");
	a = getchar();
	printf("恐懼驅使你加快腳步 這時轟然一聲...");
	a = getchar();
	int leave;
	printf("危險即將來臨，你確定要繼續嗎？\n");
	printf("1.繼續  任意數字鍵.離開\n");
	scanf("%d",&leave);
	while(leave == 1 && (*d2)->hp > 0){
		printf("出現了 ");
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
			printf("\n\n%s的能力值\nHP : %d   ATK : %d   def : %d\n", E[r - 1].name, mhp, matk, mdef);
			printf("你的能力值\nHP : %.2f   ATK : %.2f   def : %.2f\n", Hp, Atk, Def);
			
			printf("這時 你的選擇是 1. 攻擊 2. 防禦 3. 逃跑");
			if(r == 10 && (*d2)->P == 4)printf(" 4.護法現身");
			printf("\n");
			scanf("%d", &choice);
			int s = 1 + rand() % 2;
			switch(choice){
				case 1 :
					printf("\n你選擇了攻擊%s\n",E[r - 1].name);
					if(s == 1){//怪獸攻擊 
						(*d2)->hp = (*d2)->hp - matk;
						if(r == 10){//如果怪獸是催狂魔
							printf("你的攻擊對%s無效", E[r - 1].name);
							printf("你受到了%d點傷害\n",matk);
							if((*d2)->hp <= 0){
								printf("殘念 你被%s殺死了！請到魔法商店。\n", E[r - 1].name);
								(*d2)->hp = 0;
							}
							break;//離開 
						} 
						if((*d2)->hp > 0){
							mhp = (float)mhp - (*d2)->atk;
							printf("%s受到%.2f點的攻擊！\n",E[r - 1].name,(*d2)->atk);
							printf("你也受到了%d點傷害\n",matk);
						}
						else {
							printf("殘念 你被%s殺死了！請到魔法商店。\n", E[r - 1].name);
							(*d2)->hp = 0;
						}
					}
					else{//怪獸防禦 
						if(r == 10){
							printf("你的攻擊對%s無效", E[r - 1].name);
							break;
						}
						if(mdef- (*d2)->atk > 0){
							printf("%s完全擋下你的攻擊\n",E[r - 1].name);
						}
						else{
							mhp = (float)mhp - ((*d2)->atk - mdef);
							float tatk = (*d2)->atk - mdef;
							printf("%s防禦，但依舊受到%.2f點傷害\n",E[r - 1].name,tatk);
						}
					}
					break;
				case 2 :
					printf("\n你選擇了防禦\n");
					if(s==1){
						if(r == 10){
							printf("你的防禦對%s無效", E[r - 1].name);
							(*d2)->hp = (*d2)->hp - matk;
							printf("你受到了%d點傷害\n",matk);
							if((*d2)->hp <= 0){
								printf("殘念 你被%s殺死了！請到魔法商店。\n", E[r - 1].name);
								(*d2)->hp = 0;
							}
							break;//離開 
						}
						if(matk > (*d2)->def){
							(*d2)->hp = (*d2)->hp - ((float)matk - (*d2)->def);
							printf("生命值依舊受到%.2f點傷害\n",(float)matk - (*d2)->def);
						}
						else{
							printf("你擋下對方的攻擊！\n");
						}
					}
					else{
						printf("%s也是選擇防守\n什麼事都沒發生",E[r - 1].name);
					}
					break;
				case 3 :
				{
					int max = (*d2)->esc + 20;
					ranesc =  1 + rand() % max;
					if (ranesc <= (*d2)->esc){
						printf("順利逃走了...\n");
						mhp = -1;
						break;
					}
					else {
						printf("逃跑失敗！\n");
						if(s == 1){
							(*d2)->hp = (*d2)->hp - matk;
							printf("你受到了%d點傷害\n",matk);
							if((*d2)->hp <= 0){
								printf("殘念 你被%s殺死了！請到魔法商店。\n", E[r - 1].name);
								(*d2)->hp = 0;
							}
						}
						else{
							printf("%s選擇防守，但不讓你逃跑\n",E[r - 1].name);
						}
					}
					break;
				}
				case 4 : 
					if((*d2)->P == 4 && r == 10){
						printf("\n『疾疾，護法現身！』\n");
						printf("催狂魔離開了！\n");
						mhp = 0;
						int i = 1 + rand() % 2;
						if(i == 1){
							pr[6]  = pr[6] + 1;
						printf("%s掉落了%s！\n",E[r-1].name,prname[6].n);
						}
					}
					else {
						printf("沒有這個選項\n");
					}
					break;
				default:
					printf("沒有這個選項\n");
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
					printf("%s掉落了%s！\n",E[r-1].name,prname[j].n);
				}
			}
			
		}
		printf("\n下一個危險即將來臨，你確定要繼續嗎？\n");
		printf("1.繼續  任意數字鍵.離開\n");
		scanf("%d",&leave);
	}
	if((*d2)->hp == 0){
		printf("你的HP不夠，請到魔法商店補充\n");
	}
}
