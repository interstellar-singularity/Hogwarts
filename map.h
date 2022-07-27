#include<stdio.h>
#include"course.h"
#include"task.h"
#include"restaurant.h"
#include"forest.h"
#include"Magicstore.h"
int taskfi = -1;//taskfi = -1 未接任務；taskfi = 0 未完成任務；taskfi = 1 任務完成 
int tt = -1;//tt = -1 沒有任務；其他數為任務課程代號 
int tcc[8];//任務進度 
int tc[8];//任務目標 
int gonef = 0;//是否去過森林(hp是否為max): 0為否，1為是 

//1巫師大戰前；0死亡狀態；2復活後
int snape = 1;
int Albus = 1;
int Cedric = 1;
int map(int t, struct charmain *m, int *energy, int *money, struct playerdata *pdata){

	int ch ;
	printf("\nMap:\n");
	int n;
	printf("1. 玩家資訊  2. 學院課程  3. 學生地下賭場  4. 魔法商店  5.餐\廳  6.禁忌森林  7.學院教授  8.道具使用\n");
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
				printf("體力不足\n");
				break;
			}
			printf("1.變形學 2.黑魔法防禦術 3.符咒學 4.魔藥學 \n5.天文學 6.魔法史 7.草藥學 8.占卜學 9.離開\n");
			if(m->g + m->h + m->r + m->s >=232)printf("10.特別課程 : 護法課\n");
			scanf("%d",&n);
			if(n == 9)break;
			course(n,t,&m, tt, tcc, &energy);
			break;
		case 3 :
			if(*money <= 0) {
				printf("你身上沒半毛錢吧?\n別把我們當猴子耍，我們這兒不歡迎你這種人，快滾吧!");
				break;
			}
			return 3;
		case 4 :
			magicStore(&money, &m, &pdata);
			if(pdata->hp == pdata->hpmax)gonef = 0;
			break;
		case 5 :
			if(*energy >= pdata->emax)printf("你已經吃飽了，去消耗一下體力再來吧！\n");
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
				if(tc[tt] <= tcc[tt]){//檢查任務是否完成
					taskfi = 1;
				}
			}
			int tem = tt;//未完成的任務之指定課程 
			tt = task(t,tc,&taskfi,&money,tcc,snape,tem);//tt是課程代號 
			break;
		}
		case 8:
		{
			int i;
			//印出道具名稱 
			for(i = 0; i < 7; i++){
				printf("%s  %d\n",prname[i].n, pr[i]);
			}
			//如果龍之血不為零，即可使用，可選擇復活三人之一 
			if(pr [6] > 0){
				printf("你要使用\"龍之血\"嗎？(1.是  任意數字鍵.離開)\n");
				scanf("%d",&i);
				if(i == 1 && (snape == 0 || Albus == 0 || Cedric == 0)){
					printf("請問你要復活誰？\n1.阿不思‧鄧不利多\n2.賽佛勒斯‧石內卜\n3.西追‧迪哥里\n");
					printf("請輸入選項：");
					scanf("%d",&i);
					if(i == 1){
						if(Albus == 2){
							printf("他活著呢！");
							return 8;
						}
						Albus = 2;
						//每復活一人，龍之血就會減少 
						pr[6] = pr[6]-1;
						printf("恭喜！你復活了阿不思‧鄧不利多...");
						ch = getchar();
						printf("他將成為你人生中的不可多得的智者...");
						ch = getchar();
						printf("他將引導你走向你希望的巫師之路\n\n");
					}
					else if(i == 2){
						if(snape == 2){
							printf("他活著呢！");
							return 8;
						}
						snape = 2;
						//每復活一人，龍之血就會減少 
						pr[6] = pr[6]-1;
						printf("恭喜！你復活了賽佛勒斯‧石內卜...");
						ch = getchar();
						printf("他將成為你生命中的不可或缺的恩師及益友...");
						ch = getchar();
						printf("並且你們將會成為無所不談的筆友...\n\n");
					}
					else if(i == 3){
						if(Cedric == 2){
							printf("他活著呢！");
							return 8;
						}
						Cedric = 2;
						//每復活一人，龍之血就會減少 
						pr[6] = pr[6]-1;
						printf("恭喜！你復活了西追‧迪哥里...");
						ch = getchar();
						printf("他將成為你最好的朋友...");
						ch = getchar();
						printf("他會向你分享他生命裡的趣事...\n\n");
					}
					else{
						printf("沒有這個死者/n");
					}
				}
			}
			
			
			return 8;
		}
			
	}
	return 0;
}
