#pragma once
#include "Tovar.h"
class Food :
    public Tovar
{
private:
    string name_food;
public:
    Food();
    Food(string name_food);
};

