#pragma once
#include "Mom.h"

class Son : public Mom {

public:
    Son(string name, string surname, string eye_color);
    void show();

private:
    string eye_color;

};