#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"wagerValue.h"
void game(int **bankbalance){
	int wager = 0; //玩家下的賭注 
	int number = 0; //隨機數 
	int counter ;
	srand(time(NULL));
	printf("\n請下賭注: ");
	scanf("%d", &wager);
	while(wager > **bankbalance) {
		printf("請輸入有效賭注金額!\n");
		scanf("%d", &wager);
	}
	number = rand() % 1000 + 1; 
	int input = 0;//玩家輸入的猜測 
	counter = 1;//玩家猜測的次數 
	printf("一個範圍在1~1000的數\n");
	printf("你能順利猜中嗎?\n");
	printf("請輸入你的猜測: ");
	scanf("%d", &input);
	while(input != number) {
		if(input > number) {
			printf("太高了!請再試一次\n");
		}
		else{
			printf("太低了!請再試一次\n");
		}
		scanf("%d", &input);
		counter = counter + 1;
	}
	printf("你猜中了!恭喜你!\n");
	printf("您的猜測次數為%d", counter);
	wager = wager_value(&wager, &counter);
	**bankbalance = **bankbalance + wager;
	
	
	puts("\n");
	

}
