#ifndef H_FOR_GAME
#define H_FOR_GAME
#include "player.h"
#include "bord.h"
#include "peace.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

class game{
public:
	game(player* p1,player* p2,bool disp);
	int winner();
private:
	void makePeace(string type,char posx,int posy);
	player* _wight;
	player* _black;
	vector<peace> _peaces;
	bord* _thebord;
	bool _disp;
	printer* _printer;
}

#endif
