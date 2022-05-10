#include <iostream>
#include "classes/win/win.hpp"
/**
 * @brief Основная функция
 * @details Функция, в которой запускается выполнение программы.
 * 
 * @return int 
 */
int main(){
    win *a = new win();
    a->start();
    delete a;
    return 0;
}