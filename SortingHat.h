#include<stdio.h>
struct charmain{
	int g;//葛萊分多 
	int s;//史來哲林 
	int h;//赫夫帕夫 
	int r;//雷文克勞
	int P;//護法 
};
int SortingHat(struct charmain a){
	int hold;
	char colle;
	if(a.g > a.s){
		hold = a.g;
		colle = 'g';
	}
	else {
		hold = a.s;
		colle = 's';
	}
	if(a.h > hold){
		hold = a.h;
		colle = 'h';
	}
	if(a.r > hold){
		hold = a.r;
		colle = 'r';
	}
	switch(colle){
		case 'g':
			printf("葛萊分多！\n");
			hold = 1;
			break;
		case 's':
			printf("史萊哲林！\n");
			hold = 2;
			break;
		case 'h':
			printf("赫夫帕夫！\n");
			hold = 3;
			break;
		case 'r':
			printf("雷文克勞！\n");
			hold = 4;
			break;
	}
	return hold;
}


