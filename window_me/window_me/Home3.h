#pragma once
#include "Home.h"
class Home3 : public Home
{
public:
	Home3();
	Home3(std::string, std::string, std::string, std::string, std::string);
	~Home3();
	void setNational(std::string);
	void setColor(std::string);
	void setDrink(std::string);
	void setFood(std::string);
	void setBreed(std::string);
	friend bool operator ==(Home3 &, Home3 &);

private:
};