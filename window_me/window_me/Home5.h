#pragma once
#include "Home.h"

class Home5 : public Home
{
public:
	Home5();
	Home5(std::string, std::string, std::string, std::string, std::string);
	~Home5();
	void setNational(std::string);
	void setColor(std::string);
	void setDrink(std::string);
	void setFood(std::string);
	void setBreed(std::string);
	friend bool operator ==(Home5 &, Home5 &);

private:
};