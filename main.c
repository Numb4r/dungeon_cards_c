#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "player.h"

void espacamento(){
	for(size_t i=0;i<50;i++){
		printf("\n");
	}
}
void debug_player(player p){
	printf("Healt: %d\nItem: %d\nMagic: %d\n",p.health,p.item,p.magic);
}


int main(int argc,char const *argv[]){	
    srand(time(NULL));
	int mapa[3][3];
	espacamento();
	player p = Player_type_01();
	debug_player(p);
	for(size_t i = 0;i<3;i++){
		for(size_t j = 0;j<3;j++){ 
			mapa[i][j] = rand()%10;
		   	mapa[1][1] = 99;
			printf("[%zu][%zu] = %d ",i,j,mapa[i][j]);
		}
		printf("\n");
    }

	return 0;
}

