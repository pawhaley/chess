#ifndef H_FOR_PEACE
#define H_FOR_PEACE
#include "print.h"
#include <string>
using std::string;

class peace{
public:
	peace(print* ptr,string type,char posx,int posy);
	char posX(){return _posx;}
	int posY(){return _posy;}
	int image(){return _image;}
	void setPos(char posx,int posy){_posx=posx;_posy=posy;}
private:
	print* _ptr;
	int _image;
	char _posx;
	int _posy;
};
#endif
