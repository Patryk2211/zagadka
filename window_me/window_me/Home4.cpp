#include "Home4.h"

Home4::Home4()
{
}

Home4::Home4(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	national = a;
	color = b;
	drink = c;
	food = d;
	breed = e;
}

Home4::~Home4()
{
}

void Home4::setNational(std::string c)
{
	national = c;
}

void Home4::setColor(std::string c)
{
	color = c;
}

void Home4::setDrink(std::string c)
{
	drink = c;
}

void Home4::setFood(std::string c)
{
	food = c;
}

void Home4::setBreed(std::string c)
{
	breed = c;
}

bool operator ==(Home4 &a, Home4 &b)
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