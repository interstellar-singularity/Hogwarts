#include<stdio.h>
#include"SortingHat.h"
#include"student.h"
#include"teacher.h"
#include"playerdata.h"
#include"printdata.h"
#include"map.h"
#include"casinomain.h"
#include"Tom.h"
#include"war.h"
#include"letter.h"
#include"Phoenix.h"
#include"Principal.h"
#include"business.h"
#include"prompt.h" 
#include"professor.h"
#include"wizardend.h"
#include"writelegend.h"
void student(int b1,int b2);
struct college{
	int g;//葛萊分多 
	int s;//史來哲林 
	int h;//赫夫帕夫 
	int r;//雷文克勞 
};

int main(){
	int ch;
    char name[10]; 
	printf("請輸入你的名字 : ");
	scanf("%s",name);
	
	//編輯檔案 
	FILE *pfile;
	pfile = fopen("Hogwarts.txt","a");
	fprintf(pfile,"%s : %s\n","Player",name);
	fclose(pfile);
	
	printf("你好，%s...('...'為按Enter繼續)",name); 
	ch = getchar();
	ch = getchar();
	printf("你將來到霍格華茲...");
	ch = getchar();
	printf("踏上巫師之路，譜寫出屬於自己的傳說...");
	ch = getchar();
	printf("現在，請選擇進入巫師世界的月台 : 1. 9+1/4  2. 9+2/4  3. 9+3/4(請輸入1~3)");
	//表示各月臺對應的各學院指數 
	struct college p[3] = {
		{1,2,3,3},{2,3,3,1},{3,1,2,3}
	};
	//玩家的各學院指數
	struct charmain m = {
		0,0,0,0
	};
	int option;
	scanf("%d", &option);
	//防呆 
	while(option!=1 && option!=2 && option!=3){
		printf("請輸入1~3 : ");
		scanf("%d",&option);
	}
	m.g = m.g + p[option-1].g;
	m.s = m.s + p[option-1].s;
	m.h = m.h + p[option-1].h;
	m.r = m.r + p[option-1].r;
	printf("歡迎來到霍格華茲！...");
	ch = getchar();
	ch = getchar();
	printf("你正往大廳集合的路上，看到了幾個學生...");
	ch = getchar();
	printf("你可以從中挑選兩位作為你的同伴...");
	ch = getchar();
	printf("1.妙麗 2.榮恩 3.哈利 4.馬份 5.奈威 6.金妮 7.露娜 8.衛斯理雙胞胎 (請輸入你的選擇)");
	//妙麗,榮恩,哈利,馬份,奈威,金妮,露娜,衛斯理雙胞胎
	//表示所選同伴對應的各學院指數
	struct college s[8] = {  
		{3,2,1,3},{1,2,4,1},{4,1,2,2},{1,4,1,3},
		{2,1,3,1},{2,2,2,1},{2,2,1,4},{2,2,1,3}
	};
	int s1,s2;
	scanf("%d",&s1);//choose your partners
	scanf("%d",&s2);
	m.g = m.g + s[s1-1].g + s[s2 - 1].g;
	m.s = m.s + s[s1-1].s + s[s2 - 1].s;
	m.h = m.h + s[s1-1].h + s[s2 - 1].h;
	m.r = m.r + s[s1-1].r + s[s2 - 1].r;
	student(s1-1,s2-1);
	ch = getchar();
	ch = getchar();
	printf("大廳裡，前方的桌上放了一頂帽子，除了校長鄧不利多，還分別站著四位教授...");
	ch = getchar();
	printf("他們各自掌管不同學院...");
	ch = getchar();
	printf("每位學生將由那頂'分類帽'分到指定學院...");
	ch = getchar();
	printf("此時，分類帽將戴到你的頭上...");
	ch = getchar();
	printf("分類帽：你的學院是...");
	ch = getchar();
	//將玩家目前累積的各學院指數放到 SortingHat進行分類 
	int t = SortingHat(m);
	printf("恭喜！你的學院教授是");
	//各學院分別對應的教授 
	teacher(t);
	ch = getchar();
	printf("這是你目前的能力 : \n");
	//玩家的各學院指數經轉換後所得的能力資訊 
	struct playerdata pdata = data(m);
	struct playerdata *pdPtr = &pdata;
	//玩家最初的體力值設定為各學院指數相加
	int e = m.g + m.s + m.h +m.r;
	pdPtr->hp = pdPtr->hpmax;
	//玩家最初金額為200元 
	int money = 200;
	//印出最一開始的玩家資訊 
	printdata(*pdPtr, e, money);
	ch = getchar();
	printf("\n------遊戲正式開始！------\n ");
	int count = 1;//玩家所進行的回合數 
	int c = 1;
	//回合數會在第 71次時引發結局 
	while(count <= 70 ){
		if(snape == 2 || Albus == 2 || Cedric == 2){
			letter(Albus,snape,Cedric,name);
		}
		//當玩家的遊戲回合數為 46時便引發戰爭 
		if(count == 46){
			war();
			snape = 0;//石內卜逝世
			Albus = 0;//鄧不利多逝世 
			Cedric = 0;//西追逝世 
			count = count + 1;
		} 
		printf("\n\ncount : %d\n",count);
		//遊戲提示總共會出現 20次，顯示 20次後即不再提示玩家 
		if(c <= 20)prompt(c);
		c++;
		//連結到地圖 
		int n = map(t,&m, &e, &money, &pdata);
		//根據 map的回傳值 n 
		//當 n=1或-1時顯示玩家目前資訊(遊戲回合數不變) 
		if(n == 1){
			pdata = data(m);
			pdPtr->hp = pdPtr->hpmax;
			printdata(*pdPtr, e, money);
			count = count-1;
		}
		else if(n == -1){
			count = count-1;
			printdata(*pdPtr, e, money);
		}
		//當n=3時進入地下賭場 
		if(n==3){
			casinomain(&money);
		}
		//當n=8時道具查詢(遊戲回合數不變) 
		if(n==8)count = count-1;
		count = count + 1;
	}
	//玩家最後各項能力值加總 
	float total = pdPtr->hpmax+pdPtr->atk+pdPtr->def+pdPtr->esc; 
	int tom = 0;
	//end of game
	int end;
	if(total >= 396){
		tom = 1;
		int i;
		//檢查道具是否集齊 
		for(i = 0; i < 6; i++){
			if(pr[i]==0){
				tom = 0;//非佛地魔 
				break;
			}
		}
		//同時滿足total>=396及道具集齊才會變佛地魔 
		if(tom == 1){
			endtom(name);
			end = 0;
		}
	}
	if(tom == 0){
		if(total >= 369 ){//成為鳳凰會會長 
			endPhoenix(name);
			end = 1;
		}
		else if(total >= 333){//成為霍格華茲校長 
			endPrincipal(name);
			end = 2;
		}
		else if(total >= 267){//成為霍格華茲教授 
			professorend(name);
			end = 3;
		}
		else if(money >= 10000){//成為商人 
			busiend(name);
			end = 4;
		} 
		else{//成為普通巫師 
			endwizard();
			end = 5;
		}
	}
	//編輯檔案結局 
	writeFile(end);
}

