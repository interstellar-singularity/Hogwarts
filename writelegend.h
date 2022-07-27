#include<stdio.h>
void writeFile(int end){
	struct lett endwrite[]={
		{"經過不凡的生平，受眾人敬畏，變成了佛地魔！\n\n"},
		{"受眾人景仰，成為鳳凰會會長！\n\n"},
		{"師生愛戴，成為霍格華茲一校之首！\n\n"},
		{"為了施展抱負，回到霍格華茲教學當教授！\n\n"},
		{"無論是巫師世界還是麻瓜世界，你都是首富！\n\n"},
		{"平凡的一生，平凡的結局，雲淡風輕！\n\n"}
	};
	FILE *pfile;
	pfile = fopen("Hogwarts.txt","a");
	fprintf(pfile,"%s",endwrite[end].con);
	fclose(pfile);
}
