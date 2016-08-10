#include "player.h"
string user::myMove(string other) override{
	cout << "opponent moved to " << other << "\n";
	cout << "what is your move? ";
	string retval;
	std::cin >> retval;
	return retval;
}
