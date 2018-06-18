#pragma once
#include "Home.h"
class Home2 : public Home
{
public:
	Home2();
	Home2(std::string, std::string, std::string, std::string, std::string);
	~Home2();
	void setNational(std::string);
	void setColor(std::string);
	void setDrink(std::string);
	void setFood(std::string);
	void setBreed(std::string);
	friend bool operator ==(Home2 &, Home2 &);

private:
};