
struct playerdata{
	float hp;//�ͩR�O 
	float atk;//���� 
	float def;//���m 
	float esc;//�k�] 
	int emax;//max energy
	float hpmax;
	int P;//�@�k 
};
//���a�U����O��(�ھکҲֿn���U�ǰ|���ƴ��⵲�G) 
struct playerdata data(struct charmain data){
	struct playerdata d;
	d.hpmax = (float)data.g*0.4 + (float)data.h*0.3 + (float)data.s*0.2 + (float)data.r*0.1;
	d.atk = (float)data.s*0.4 + (float)data.g*0.3 + (float)data.r*0.2 + (float)data.h*0.1;
	d.def = (float)data.r*0.4 + (float)data.s*0.3 + (float)data.h*0.2 + (float)data.g*0.1;
	d.esc = (float)data.h*0.4 + (float)data.r*0.3 + (float)data.g*0.2 + (float)data.s*0.1;
	d.emax = data.g + data.h + data.r + data.s;
	return d;
}
