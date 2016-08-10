#include "bord.h"
#include "print.h"
#include <cmath>

bord::bord(print* ptrprint){
	_ptr=ptrprint;
	_size=(std::min(_ptr->xMeter(),_ptr->yMeter()))/8.0;
	cout << _size << "\n";
	_xpush=(_ptr->xMeter()-8*_size)/2.0;
	_ypush=(_ptr->yMeter()-8*_size)/2.0;
}

void bord::disp(){
	_ptr->printAsBack(_ptr->Obj("red.jpg"));
	for(int x=0;x<8;x++){
		for(int y=0;y<8;y++){
			int obj;
			if((x+y)%2){
				obj=_ptr->Obj("black.jpg");
			}else{
				obj=_ptr->Obj("white.jpg");
			}
			_ptr->printAtSize(obj,x*_size+_xpush,(y+1)*_size+_ypush,_size,_size);
		}
	}
	for(int i=0;i<_peaces.size();i++){
		printP(_peaces[i]);
	}
	_ptr->printOut();
}

void bord::addpeace(peace* peaceToAdd){
	_peaces.push_back(peaceToAdd);
}

void bord::printP(peace* P){
	_ptr->printAtSize(P->image(),((int)P->posX()-(int)  'A')*_size+_xpush,(P->posY())*_size+_ypush,_size,_size);
}
