#include<stdio.h>
#include<time.h>
struct lett{
	char con[100];
};
void letter(int Albus, int snape, int Cedric,char name[]){
	int ch;
	printf("\n\n你收到了來自");
	srand(time(NULL));
	
	if(Albus == 2){
		int r = 0 + rand() % 8;
		struct lett L[]={
			{"最近校務有些繁忙，許久沒跟你好好聊聊了，不知道最近你過的可好？"},
			{"我最近發明了一種魔草香茶，我為你留了一份，有空來品嘗看看吧？"},
			{"其實天空很美，只是陰晴多變。"}, 
			{"我最近蒐集了一種類似麻瓜世界的螢火蟲，螢光會變色，挺美的，不過有點臭。"},
			{"今天我在窗邊意外救了一隻受傷的傳信貓頭鷹，而我惡作劇地偷偷看了信一眼，原來是學生們的情書。"},
			{"我最近看了一本書，覺得挺有深意的，希望有空我們能來聊聊。"},
			{"今天聽到有學生被幽靈嚇到了，我很訝異，畢竟世上很多更可怕的東西，譬如人心。"},
			{"如果你不知道未來會發生什麼，那就相信自己，然後做出不讓自己有機會後悔的決定。"}
		}; 
		printf("阿不思•鄧不利多的信...\n\n");
		ch = getchar();
		printf("給親愛的孩子 %s :\n",name);
		printf("    %s\n\n					  阿不思•鄧不利多\n\n",L[r].con);
	}
	if(snape == 2){
		int r = 0 + rand() % 8;
		struct lett L[]={
			{"我這裡有幾種稀有魔草藥，也許你應該多多學習這方面的知識。"},
			{"有時親眼所見並非真實，總是只有愚蠢的人才會被許多巧合蒙蔽雙眼。"},
			{"每個人都談論的英雄，那得有多輝煌的表象，才能剛好掩蓋住那不為人知的骯髒。"},
			{"你必須知道，心靈並不是一本書，是不能被翻閱和檢查的。"},
			{"許多人只會苦澀的抱怨生命的不公，他們可能沒有發現，生活本來就是不公平的。"},
			{"偏見只會顯露一個人是多無知，但總有人驕矜地以此展現自己，並樂此不疲。"}, 
			{"我不奢望他人理解黑魔法的奧妙之處，就像是不期望一隻蟲子聽得懂人的語言。"},
			{"名氣不代表一個人的實力，只是證明了世人對謠言的熱衷。"}
		}; 
		printf("賽佛勒斯•石內卜的信...\n\n");
		ch = getchar();
		printf("To %s :\n",name);
		printf("    %s\n\n		 		   	   賽佛勒斯•石內卜\n\n",L[r].con);
	}
	if(Cedric == 2){
		int r = 0 + rand() % 8;
		struct lett L[]={
			{"該來的總會來，來了我們必須接受。"},
			{"有時間的話，要不來場魁地奇吧?我們好久沒切磋一下了。"},
			{"嘿!看看這根魔杖，裡面是獨角獸毛，據說是從一頭出奇漂亮的公獨角獸尾巴上拔下來的，你能代我保管它一下嗎?"}, 
			{"聽我說，我曾有的那些關於勝利幻想殘存的餘溫似乎一點點散去，我明白，一切是回不去了。"},
			{"喔不!我知道這一切來得有多突然，但請你別怨恨也別自責，我相信你不會的，抹去淚水，繼續前行吧。"},
			{"比起爭論一場比賽的輸贏，公平與否顯得更重要，不是嗎?"},
			{"那女孩...，喔你問我她是誰嗎，就是我在三巫鬥法大賽上共舞的那女孩呀，她...近日可好嗎?能代我慰問她嗎?"},
			{"如果我又遭遇不測了，請將我的遺體帶回我父母身邊，拜託了。"} 
		}; 
		printf("西追•迪哥里的信...\n\n");
		ch = getchar();
		printf("Hello %s :\n",name);
		printf("    %s\n\n					  西追•迪哥里\n\n",L[r].con);
	}
}
