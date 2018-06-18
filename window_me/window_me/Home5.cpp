#include "Home5.h"

Home5::Home5()
{
}

Home5::Home5(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	national = a;
	color = b;
	drink = c;
	food = d;
	breed = e;
}

Home5::~Home5()
{
}

void Home5::setNational(std::string c)
{
	national = c;
}

void Home5::setColor(std::string c)
{
	color = c;
}

void Home5::setDrink(std::string c)
{
	drink = c;
}

void Home5::setFood(std::string c)
{
	food = c;
}

void Home5::setBreed(std::string c)
{
	breed = c;
}

bool operator ==(Home5 &a, Home5 &b)
{
	if (a.national == b.national)
	{
		Home::licznik += 4;
	}
	if (a.color == b.color)
	{
		Home::licznik += 4;
	}
	if (a.drink == b.drink)
	{
		Home::licznik += 4;
	}
	if (a.food == b.food)
	{
		Home::licznik += 4;
	}
	if (a.breed == b.breed)
	{
		Home::licznik += 4;
	}
	return true;
}