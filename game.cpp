#include "game.h"
game::game(player* p1,player* p2,bool disp){
	_wight=p1;
	_black=p2;
	_disp=disp;
	if(_disp==true){
		_printer=new print;
		_thebord=new bord(_printer);
	}
	for(char c='A';c<='H';c++){
		makePeace("WP",c,2);
		makePeace("BP",c,7);
	}
	makePeace("WR",'A',1);
	makePeace("WN",'B',1);
	makePeace("WB",'C',1);
	makePeace("WQ",'D',1);
	makePeace("WK",'E',1);
	makePeace("WB",'F',1);
	makePeace("WN",'G',1);
	makePeace("WR",'H',1);

	makePeace("BR",'A',8);
	makePeace("BN",'B',8);
	makePeace("BB",'C',8);
	makePeace("BQ",'D',8);
	makePeace("BK",'E',8);
	makePeace("BB",'F',8);
	makePeace("BN",'G',8);
	makePeace("BR",'H',8);
	
	if(_disp==true){_thebord->disp();}
	string move=p1->myMove("null");
	Move(move);
	if(_disp==true){_thebord->disp();}
	while(true){
		move=p2->myMove(move);
		Move(move);
		if(_disp==true){_thebord->disp();}
		move=p1->myMove(move);
		Move(move);
		if(_disp==true){_thebord->disp();}
	}
}



void game::makePeace(string type,char posx,int posy){
	peace* temp = new peace(_printer,type,posx,posy);
	_peaces.push_back(temp);
	if(_disp==true){
		_thebord->addpeace(temp);
	}
}

void game::Move(string moveQ){//like A5D3 move the peace on A5 to D3
	for(int i=0;i<_peaces.size();i++){
		if(_peaces[i]->posX()==moveQ[0] && _peaces[i]->posY()==moveQ[1]){
			_peaces[i]->setPos(moveQ[2],moveQ[3]);
		}
	}
}
