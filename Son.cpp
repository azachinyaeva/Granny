#include "Gran.h"
#include "Son.h"

    void Son::show() {
        Granny::show();
        cout << "�������: " << surname << " ";
        cout << "���� ����: " << eye_color;
    }
