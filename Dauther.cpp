#include "Gran.h"
#include "Dauther.h"

    Dauther::Dauther(string name, string surname, int age) : Mom(name, surname) {
    this->age = age;
}

    void Dauther::show() {
        Mom::show();
        cout << "Возраст: " << age;

    }
