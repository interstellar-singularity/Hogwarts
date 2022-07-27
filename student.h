#include<stdio.h>
struct stuname{
	char name[20];
};
void student(int b1, int b2){

	struct stuname sn[8] = {
		{"妙麗"},{"榮恩"},{"哈利"},{"馬份"},{"奈威"},{"金妮"},{"露娜"},{"衛斯理雙胞胎"}
	};
	printf("於是，你跟%s和%s一同前往大廳...", sn[b1].name, sn[b2].name);
}

