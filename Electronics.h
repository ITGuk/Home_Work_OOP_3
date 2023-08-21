#pragma once
#include "Tovar.h"
class Electronics :
    public Tovar
{
private:
    string phone;
    string tablet;
public:
    Electronics();
    Electronics(string phone, string tablet);
};
