#include "peace.h"

peace::peace(print* ptr,string type,char posx,int posy){
	_ptr=ptr;
	_image=_ptr->Obj(type + ".png");
	_posx=posx;
	_posy=posy;
}
