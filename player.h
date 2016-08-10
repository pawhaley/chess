#ifndef H_FOR_PLAYER
#define H_FOR_PLAYER

#include <string>
using std::string;

class player{
public:
	virtual player();
	virtual ~player();
	//string of the form D5A1 meaning move from D5 to A1
	virtual string myMove(string other);
protected:
	
};

class user : public player{
	string myMove(string other) override;
}

#endif
