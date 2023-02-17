#pragma once
#include "Mom.h"

class Dauther : public Mom {

public:
    Dauther(string name, string surname, int age);
    void show();

private:
    int age;

};
