#pragma once
#include <iostream>
using namespace std;

class Granny {

public:
    Granny(string name_) {
        name = name_;
    }

    virtual void show();

protected:
    string name;

};