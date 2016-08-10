#include "game.h"
game::game(player* p1,player* p2,bool disp){
	_wight=p1;
	_black=p2;
	_disp=disp;
	_printer=new print;
	_thebord=new bord(_printer);
	
}

void game::makePeace(string type,char posx,int posy){
	peace* temp = new peace(_printer,type,posx,posy);
	_peaces.push_back(temp);
	_thebord.addpeace(temp);
}
