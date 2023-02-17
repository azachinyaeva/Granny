#include "Gran.h"
#include "Mom.h"


    Mom::Mom(string name, string surname) : Granny(name) {
        this->surname = surname;
    }

    void Mom::show()  {
        Granny::show();
        cout << "Фамилия: " << surname << " ";
    }
