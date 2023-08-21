#include "Tovar.h"
Tovar::Tovar()
{
	int price_pos = 0;
	int count_pos = 0;
	string name_pos = "";
}

Tovar::Tovar(int price_pos, int count_pos, string name_pos)
{
	this->price_pos = price_pos;
	this->count_pos = count_pos;
	this->name_pos = name_pos;
}

void Tovar::Setname(string name_pos)
{
	this->name_pos = name_pos;
}
void Tovar::Setprice(int price_pos)
{
	this->price_pos = price_pos;
}
void Tovar::Setcount(int count_pos)
{
	this->count_pos = count_pos;
}

string Tovar::Getname()
{
	return name_pos;
}
int Tovar::Getprice()
{
	return  price_pos;
}
int Tovar::Getcount()
{
	return count_pos;
}