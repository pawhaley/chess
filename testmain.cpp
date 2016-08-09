/*
main.cpp
Parker Whaley + group
5/7
the main function for the game
*/


//location of the SDL in windows vs linux
#ifdef _WIN32
#include <SDL.h>
#include <SDL_image.h>

#else
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#endif

//all of the assorted classes
#include "print.h"
#include "input.h"
#include <iostream>
#include <random>
#include <ctime>
#include <vector>

using std::vector;
using std::cout;
using std::endl;


int main(int argc,char **argv){
	SDL_Init(SDL_INIT_EVERYTHING);
	print printer;
	input in;
	printer.printOut();
	while(!in.spacekey()){}
}
