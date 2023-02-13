#include <iostream>
#include "Gran.h"
#include "Mom.h"
#include "Dauther.h"
#include "Son.h"

using namespace std;

void show_info(Granny* p) {
    p->show();
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    Granny granny("Валентина");
    Mom mom("Ирина", "Иванова");
    Dauther dauther("Юлия", "Иванова", 16);
    Son son("Алексей", "Иванов", "карие");
    Granny* p_related = &granny;
    show_info(p_related);
    p_related = &mom;
    show_info(p_related);
    p_related = &dauther;
    show_info(p_related);
    p_related = &son;
    show_info(p_related);
}