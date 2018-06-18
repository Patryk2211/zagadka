#include "Home2.h"

Home2::Home2()
{
}

Home2::Home2(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	national = a;
	color = b;
	drink = c;
	food = d;
	breed = e;
}

Home2::~Home2()
{
}

void Home2::setNational(std::string c)
{
	national = c;
}

void Home2::setColor(std::string c)
{
	color = c;
}

void Home2::setDrink(std::string c)
{
	drink = c;
}

void Home2::setFood(std::string c)
{
	food = c;
}

void Home2::setBreed(std::string c)
{
	breed = c;
}

bool operator ==(Home2 &a, Home2 &b)
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