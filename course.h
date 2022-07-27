#include<stdio.h>

void course(int cour, int t, struct charmain **m, int tt, int tcc[], int **e){
	
	switch(cour){
		case 1://變形學
			**e = **e - 5;
			if(tt>=0)tcc[0] = tcc[0]+1;
			if(t == 1) (*m)->g = (*m)->g + 7;
			else (*m)->g = (*m)->g + 5;
			(*m)->h = (*m)->h + 2;
			break;
		case 2://黑魔法防禦術
			**e = **e - 5;
			if(tt>=0)tcc[1] = tcc[1]+1;
			if(t==2) (*m)->s = (*m)->s + 7;
			else (*m)->s = (*m)->s +5;
			(*m)->g = (*m)->g + 2;
			break;
		case 3://符咒學
			**e = **e - 5;
			if(tt>=0)tcc[2] = tcc[2]+1;
			if(t == 3) (*m)->h = (*m)->h + 7;
			else (*m)->h = (*m)->h + 5;
			(*m)->s = (*m)->s + 2;
			break;
		case 4://魔藥學
			**e = **e - 5;
			if(tt>=0)tcc[3] = tcc[3]+1;
			if(t==2) (*m)->s = (*m)->s + 7;
			else (*m)->s = (*m)->s +5;
			(*m)->r = (*m)->r + 2;
			break;
		case 5://天文學
			**e = **e - 5;
			if(tt>=0)tcc[4] = tcc[4]+1;
			if(t == 4) (*m)->r = (*m)->r + 7;
			else (*m)->r = (*m)->r + 5;
			(*m)->h = (*m)->h + 2;
			break;
		case 6://魔法史
			**e = **e - 5;
			if(tt>=0)tcc[5] = tcc[5]+1;
			if(t==1) (*m)->g = (*m)->g + 7;
			else (*m)->g = (*m)->g +5;
			(*m)->r = (*m)->r + 2;
			break;
		case 7://草藥學
			**e = **e - 5;
			if(tt>=0)tcc[6] = tcc[6]+1;
			if(t == 3) (*m)->h = (*m)->h + 7;
			else (*m)->h = (*m)->h + 5;
			(*m)->s = (*m)->s + 2;
			break;
		case 8://占卜學
			**e = **e - 5;
			if(tt>=0)tcc[7] = tcc[7]+1;
			if(t==4) (*m)->r = (*m)->r + 7;
			else (*m)->r = (*m)->r +5;
			(*m)->g = (*m)->g + 2;
			break;
		case 10:
			if((*m)->g + (*m)->h + (*m)->r + (*m)->s >=232 && (*m)->P < 4){
				if(cour == 10){
					if(**e < 10){
						printf("體力不足\n");
					} 
					else{
						**e = **e - 10;
						(*m)->g = (*m)->g + 6;
						(*m)->s = (*m)->s + 6;
						(*m)->h = (*m)->h + 6;
						(*m)->r = (*m)->r + 6;
						(*m)->P = (*m)->P + 1; 
						if((*m)->P == 4)printf("恭喜！你習得了護法！\n");
					}
				}
			}
			else{
				if((*m)->g + (*m)->h + (*m)->r + (*m)->s < 232)printf("\n你尚未解鎖這門特別課程\n");
				if((*m)->P >= 4)printf("\n你已學會護法，請另擇其他課程\n");
			}
			break;
		default:
			printf("沒有這門課\n");
			break;
	}
} 
