#pragma once
#include "Home.h"
class Home4 : public Home
{
public:
	Home4();
	Home4(std::string, std::string, std::string, std::string, std::string);
	~Home4();
	void setNational(std::string);
	void setColor(std::string);
	void setDrink(std::string);
	void setFood(std::string);
	void setBreed(std::string);
	friend bool operator ==(Home4 &, Home4 &);

private:
};