#include <stdio.h>

void magicStore(int **money, struct charmain **m, struct playerdata **d){

	int ch;
	struct stuname acc[8] = {
	{"金探子的翅膀"},{"牛奶軟糖"},{"椰子霜糖"},{"鳳凰的眼淚\"},
	{"水晶球"},{"魔鏡"},{"魔法掃帚"},{"冥想盆"}
	} ;
	int opt;
	//前四個增加hp,後四個道具增加g.s.r.h 
	printf("歡迎光臨來到斜角巷111號魔法商店...");
	ch = getchar();
	ch = getchar();
	printf("以下是我們的商品：\n");
	ch = getchar();
	printf("\n1.%s $25\n  HP + 10\n\n2.%s $35\n  HP + 20\n",acc[0].name,acc[1].name);
	printf("\n3.%s $40\n  HP + 25\n\n4.%s $1500\n  HP加滿\n",acc[2].name,acc[3].name);
	printf("\n5.%s $50\n  葛萊分多指數 + 5\n\n6.%s $50\n  史來哲林指數 + 5\n",acc[4].name,acc[5].name);
	printf("\n7.%s $50\n  雷文克勞指數 + 5\n\n8.%s $50\n  赫夫帕夫指數 + 5\n",acc[6].name,acc[7].name);
	scanf("%d",&opt);

	switch(opt){
		case 1:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n你的生命力充沛，去戰鬥後再來吧！\n");
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
				printf("\n你的錢不夠。\n");
			}
			break;
		case 2:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n你的生命力充沛，去戰鬥後再來吧！\n");
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
				printf("\n你的錢不夠。\n");
			}
			break;
		case 3:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n你的生命力充沛，去戰鬥後再來吧！\n");
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
				printf("\n你的錢不夠。\n");
			}
			break;
		case 4:
			if((*d)->hp>=(*d)->hpmax){
				printf("\n你的生命力充沛，去戰鬥後再來吧！\n");
				break;
			}
			if(**money >= 1500){
				(*d)->hp = (*d)->hpmax; 
				printf("Your HP is %.2f now",(*d)->hp);
				**money = **money - 1500;
			}
			else{
				printf("\n你的錢不夠。\n");
			}
			break;	
		case 5:
			if(**money >= 50){
				(*m)->g = (*m)->g + 5;
				**money = **money - 50;
			}
			else{
				printf("\n你的錢不夠。\n");
			}
			break;
		case 6:
			if(**money >= 50){
				(*m)->s = (*m)->s + 5;
				**money = **money - 50;
			}
			else{
				printf("\n你的錢不夠。\n");
			}
			break;
		case 7:
			if(**money >= 50){
				(*m)->r = (*m)->r + 5;
				**money = **money - 50;
			}
			else{
				printf("\n你的錢不夠。\n");
			}
			break;
		case 8:
			if(**money >= 50){
				(*m)->h = (*m)->h + 5;
				**money = **money - 50;
			}
			else{
				printf("\n你的錢不夠。\n");
			}
			break;
	}
}
