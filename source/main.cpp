#include <iostream>
#include "classes/win/win.hpp"

int main(){
    win *a = new win();
    a->start();
    delete a;
    return 0;
}