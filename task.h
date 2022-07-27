#include<stdio.h>
#include <stdlib.h> 
#include <time.h>
int task(int t, int tc[],int *tf,int **money,int tcc[],int snape,int tem){

	int ch;
	ch = getchar();
	if(*tf == 1){
		printf("恭喜你完成任務！...");
		ch = getchar();
		printf("獎勵金550！...");
		**money = **money + 550; 
		*tf = -1;
		return -1;//課程初始化 
	}
	else if(*tf == 0){
		int conti;
		printf("你的任務尚未完成，是否放棄？(1.繼續任務 2.放棄任務)\n");
		scanf("%d", &conti);
		while(conti != 1 && conti != 2){
			printf("請輸入1跟2 (1.繼續任務 2.放棄任務)\n");
			scanf("%d", &conti);
		}
		if(conti == 2){
			*tf = -1;
			return -1;//課程初始化 
		}
		return tem;//原本課程 
	}
	else if(*tf == -1){
		int i;
		//任務歸零 
		for(i = 0; i <= 7; i++){
			tc[i] = 0;
		}
		//進度歸零 
		for(i = 0; i <= 7; i++){
			tcc[i] = 0;
		}
		srand(time(NULL));
		int r = (rand() % 8) + 0;
		int count = (rand() % 4) +1;
		struct stuname cname[8] = {
			"變形學","黑魔法防禦術","符咒學","魔藥學","天文學","魔法史","草藥學","占卜學"
		};
		tc[r] = count;
		printf("你走到了學院教授的辦公室...");
		ch = getchar();
		if(snape == 0 && t == 2){
			printf("打開門，你看到學生任務單孤孤單單地躺在已經失去主人的教授桌上...");
			ch = getchar();
			printf("你默默的打開任務單...");
			ch = getchar();
			printf("任務是...");
		}
		else{
			printf("打開門，你見到了");
			teacher(t);
			printf("教授...");
			ch = getchar();
			printf("你告訴對方自己是來領取學生任務...");
			ch = getchar();
			printf("於是教授給了你一張紙條...");
			ch = getchar();
			printf("紙條上的任務是...");
		}
		ch = getchar();
		printf("修習'%s'%d次！！...",cname[r].name,count);
		*tf = 0;
		return r;//課程 
	}
	
}

