#ifndef H_FOR_PLAYER
#define H_FOR_PLAYER

#include <string>
#include<iostream>
#include "input.h"
using std::string;

class player{
public:
	//like A5D3 move the peace on A5 to D3
	string myMove(string other){
		std::cout << "opponent moved to " << other << "\n";
		std::cout << "what is your move? ";
		string retval;
		std::cin >> retval;
		return retval;
	}
private:
	int temp;
};

#endif
