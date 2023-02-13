#pragma once
#include "Gran.h"

class Mom : public Granny {

public:
    Mom(string name, string surname) : Granny(name) {
        this->name = name;
        this->surname = surname;
    }

    void show();

private:
    string surname;

};
