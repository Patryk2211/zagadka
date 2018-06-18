#pragma once
#include "Home.h"
class Home1 : public Home
{
public:
	Home1();
	Home1(std::string, std::string, std::string, std::string, std::string);
	~Home1();
	void setNational(std::string);
	void setColor(std::string);
	void setDrink(std::string);
	void setFood(std::string);
	void setBreed(std::string);
	friend bool operator ==(Home1 &, Home1 &);

private:
};