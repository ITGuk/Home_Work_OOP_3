#pragma once
#include <iostream>
using namespace std;

class Tovar
{
private:
	string name_pos;
	int price_pos;
	int count_pos;
public:
	Tovar();
	Tovar(int price_pos, int count_pos, string name_pos);
	void Setname(string name_pos);
	void Setprice(int price_pos);
	void Setcount(int count_pos);

	string Getname();
	int Getprice();
	int Getcount();
};