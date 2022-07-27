#include <stdio.h> 
void restaurant(int **money,int **energy){
	int ch ;
	int choose;
	printf("經過一整天的選擇，想必你已經又餓又累了...");
	ch = getchar();
	ch = getchar();
	printf("那麼來點美食補充能量吧!");
	ch = getchar();
	
	printf("\n1.奶油啤酒 $15\n  energy + 7\n\n2.蟑螂串 $20\n  energy + 11\n");
	printf("\n3.巧克力蛙 $25\n  energy + 17\n\n4.柏蒂全口味豆 $30\n  energy + 22\n");
	printf("\n5.吹寶超級泡泡糖 $33\n  energy + 26\n"); 
	scanf("%d",&choose);
	
	if(choose == 1 || choose == 2 || choose == 3 || choose == 4 || choose == 5){
		switch(choose){
			case 1 :
				if(**money >= 15){
					printf("喝了這杯能讓熱氣溫暖內心的每一處\n");
					**money = **money - 15 ;
					**energy = **energy + 7 ;	
				}
				else{
					printf("\n你的錢不夠。\n");
				}
				break;
			case 2 :
				if(**money >= 20){
					printf("補充蛋白質有益身體健康!\n");
					**money = **money - 20 ;
					**energy = **energy + 11 ;
				}
				else{
					printf("\n你的錢不夠。\n");
				}
				break;
			case 3 :
				if(**money >= 25){
					printf("一種形似青蛙會跳動的巧克力，附有可搜集的卡片\n");
					**money = **money - 25 ;
					**energy = **energy + 17 ;
				}
				else{
					printf("\n你的錢不夠。\n");
				}
				break;
			case 4 :
				if(**money >= 30){
					printf("裡面的豆子口味千奇百怪，如：巧克力口味、太妃糖口味、鼻涕口味、耳屎口味等等\n");
					**money = **money - 30 ;
					**energy = **energy + 22 ;
				}
				else{
					printf("\n你的錢不夠。\n");
				}
				break;
			case 5 :	
				if(**money >= 33){
					printf("吃此食物能使整個房間充滿藍色風鈴草顏色的泡泡，幾天都不會破滅唷!\n");
					**money = **money - 33 ;
					**energy = **energy + 26 ;
				}
				else{
					printf("\n你的錢不夠。\n");
				}
				
				break;
		}
	}
	else{
		printf("你選擇的不在菜單上\n");
	}
	
}
