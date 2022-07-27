
struct playerdata{
	float hp;//生命力 
	float atk;//攻擊 
	float def;//防禦 
	float esc;//逃跑 
	int emax;//max energy
	float hpmax;
	int P;//護法 
};
//玩家各項能力值(根據所累積的各學院指數換算結果) 
struct playerdata data(struct charmain data){
	struct playerdata d;
	d.hpmax = (float)data.g*0.4 + (float)data.h*0.3 + (float)data.s*0.2 + (float)data.r*0.1;
	d.atk = (float)data.s*0.4 + (float)data.g*0.3 + (float)data.r*0.2 + (float)data.h*0.1;
	d.def = (float)data.r*0.4 + (float)data.s*0.3 + (float)data.h*0.2 + (float)data.g*0.1;
	d.esc = (float)data.h*0.4 + (float)data.r*0.3 + (float)data.g*0.2 + (float)data.s*0.1;
	d.emax = data.g + data.h + data.r + data.s;
	return d;
}
