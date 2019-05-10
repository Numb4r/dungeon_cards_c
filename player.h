typedef struct{
	
	int health ;
	int item ;
	int type;
	int magic;
}player;

player Player_type_01(){
	player p ;
	p.type = 0;
	p.health = 10;
	p.item = 1;
	p.magic = 1;
	return p;
}

