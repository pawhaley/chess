#ifndef H_FOR_BORD
#define H_FOR_BORD

#include "print.h"
#include "peace.h"
#include <vector>
using std::vector;

class bord{
public:
	bord(print* ptrprint);
	void disp();
	void addpeace(peace* peaceToAdd);
private:
	print* _ptr;
	double _size;
	double _ypush;
	double _xpush;
	vector<peace*> _peaces;
	void printP(peace* P);
};







#endif
