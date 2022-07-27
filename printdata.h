#include<stdio.h>
void printdata(struct playerdata d1, int e, int money){
	printf("HP(生命值) : %.2f   ATK(攻擊力) : %.2f\n", d1.hp, d1.atk);
	printf("def(防禦力) : %.2f   ESC(逃跑指數) : %.2f\n", d1.def, d1.esc);
	printf("energy(體力) : %d   money : %d\n", e, money);
}
