#include "Home1.h"

Home1::Home1()
{
}

Home1::Home1(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	national = a;
	color = b;
	drink = c;
	food = d;
	breed = e;
}

Home1::~Home1()
{
}

void Home1::setNational(std::string c)
{
	national = c;
}

void Home1::setColor(std::string c)
{
	color = c;
}

void Home1::setDrink(std::string c)
{
	drink = c;
}

void Home1::setFood(std::string c)
{
	food = c;
}

void Home1::setBreed(std::string c)
{
	breed = c;
}

bool operator ==(Home1 &a, Home1 &b)
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