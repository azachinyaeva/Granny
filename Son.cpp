#include "Gran.h"
#include "Son.h"

    void Son::show() {
        Granny::show();
        cout << "Фамилия: " << surname << " ";
        cout << "Цвет глаз: " << eye_color;
    }
