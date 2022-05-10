#include "map.hpp"
#include <fstream>
#include <string>

/**
 * @brief Construct a new map::map object.
 * @author Mast_mex
 * @version 0.1
 * @details Создает новый объект карты и приводит его атрибуты в стандартное значение.
 * 
 */
map::map()
{
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            this->MP[i][j]=0;
    this->current_level=1;
}

void map::generate()
{

}

/**
 * @brief Инициализация карты из заранее подготовленного файла
 * @details Инициализация карты из заранее подготовленного файла, при помощи параметра
 * 
 * @param i 
 */
void map::load(int i)
{
    std::string op = std::to_string(i);
    op=op+".mp";
    std::ifstream file;
    file.open(op);
    for(int g=0;g<100;g++)
        for(int j=0;j<100;j++)
        {
            file>>this->MP[g][j];
        }
}