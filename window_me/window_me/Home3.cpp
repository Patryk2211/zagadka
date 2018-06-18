#include "Home3.h"

Home3::Home3()
{
}

Home3::Home3(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	national = a;
	color = b;
	drink = c;
	food = d;
	breed = e;
}

Home3::~Home3()
{
}

void Home3::setNational(std::string c)
{
	national = c;
}

void Home3::setColor(std::string c)
{
	color = c;
}

void Home3::setDrink(std::string c)
{
	drink = c;
}

void Home3::setFood(std::string c)
{
	food = c;
}

void Home3::setBreed(std::string c)
{
	breed = c;
}

bool operator ==(Home3 &a, Home3 &b)
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