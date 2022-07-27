#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"
#include"gamerule.h"
void casinomain(int *money){
	int ch;
	printf("歡迎來到地下賭場...('...'為按Enter繼續)\n");
	ch = getchar();
	printf("來到這兒，你可能一夕致富...");
	ch = getchar();
	printf("但也可能輸到傾家蕩產...");
	ch = getchar();
	printf("一個遊戲，一套規則...");
	ch = getchar();
	printf("下好你的賭注...");
	ch = getchar();
	printf("一場智力與命運的對決即將展開...\n");
	int option = 0;//選項可供查詢 	
	gamerule();
	game(&money);	
	while(*money > 0) {
		printf("\n1.查看您現持有金額\n");
		printf("2.繼續挑戰遊戲\n");
		printf("3.離開地下賭場\n");
		printf("請輸入選項?");
		scanf("%d", &option);
	
		switch(option) {
			case 1:
				printf("\n您現持有金額為%d\n", *money);
				if(*money > 0 && *money <= 100) {
					printf("\n你快破產了!要不下回再來挑戰吧?\n");
				}
				else{
					printf("\nHey,cmon!\n");
					printf("再來一局吧!\n");
				}
				break;
			case 2:
				if(*money <= 0) {
					printf("\n很遺憾，你已經破產了，我們只好請你離開。\n");
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
			printf("糟糕!你被發現了!\n有人去密報教授，說有學生出沒在地下賭場，慌忙逃離之際，你掉了一半的金額。");
			break;
		}
	}
	
	
}
