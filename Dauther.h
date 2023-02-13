#pragma once
#include "Gran.h"

class Dauther : public Granny {

public:
    Dauther(string name, string surname, int age) : Granny(name) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    void show();

private:
    string surname;
    int age;

};
