#include<stdio.h>
void teacher(int t){
	struct stuname T[4] = {
		{"麥米奈娃"},{"石內卜"},{"帕莫娜·芽菜"},{"菲力·孚立維"}
	};
	printf("%s",T[t-1].name);
}
