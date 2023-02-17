#include "Gran.h"
#include "Son.h"

    Son::Son(string name, string surname, string eye_color) : Mom(name, surname) {
        this->eye_color = eye_color;
    }

    void Son::show() {
        Mom::show();
        cout << "Цвет глаз: " << eye_color;
    }
