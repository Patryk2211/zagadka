#include <string>
#pragma once

class Home
{
public:
	virtual ~Home();
	static int licznik;

protected:
	std::string national;
	std::string color;
	std::string drink;
	std::string food;
	std::string breed;
};