#pragma once
#include "Gran.h"

class Son : public Granny {

public:
    Son(string name, string surname, string eye_color) : Granny(name) {
        this->name = name;
        this->surname = surname;
        this->eye_color = eye_color;
    }

    void show();

private:
    string surname;
    string eye_color;

};