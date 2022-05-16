#include <iostream>
#include "classes/win/win.hpp"
#ifdef _WIN32
    #include "windows.h"
    int main(){
    HWND hConsole = GetConsoleWindow();
    ShowWindow(hConsole, SW_HIDE);
    win *a = new win();
    a->start();
    delete a;
    return 0;
}
#else
    int main(){
    win *a = new win();
    a->start();
    delete a;
    return 0;
}
#endif

