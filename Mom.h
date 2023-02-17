#pragma once
#include "Gran.h"

class Mom : public Granny {

public:
    Mom(string name, string surname);

    void show();

protected:
    string surname;

};
