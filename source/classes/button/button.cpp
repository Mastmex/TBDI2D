#include "button.hpp"

/**
 * @brief Construct a new button::button object
 * @author Mast_mex
 * @version 0.1
 * @details Конструктор кнопки, задающий размер кнопки и ее расположение на экране
 * 
 * @param x Координата х верхнего левого угла кнопки
 * @param y Координата у верхнего левого угла кнопки
 * @param length Размер кнопки в длину 
 * @param height Размер кнопки в высоту
 */
button::button(float x, float y, float length, float height)
{
    this->height = height;
    this->x = x;
    this->y = y;
    this->length = length;
    coex = 1;
    coey = 1;
}
/**
 * @brief Проверка нахождения курсора над кнопкой
 * @author Mast_mex
 * @version 0.1
 * @details Метод проверяет наличие курсора над кнопкой при подаче в него координат курсора
 * 
 * @param x х координата курсора
 * @param y у координата курсора
 * @return true при нахождении курсора над кнопкой
 * @return false при нессответствии координат курсора и кнопки
 */
bool button::isAbove(float x, float y)
{
    return (x>=this->x*this->coex && x<=(this->x*this->coex+this->length*this->coex) && y>=this->y*this->coey && y<=(this->y*this->coey+this->height*this->coey));
}
/**
 * @brief Изменение размера кнопки
 * @author Mast_mex
 * @version 0.1
 * @details Изменяет размер кнопки, изменяя ее коэффициенты. Изначальное значение - 1. 
 * 
 * @param c1 Коэффициент по х
 * @param c2 Коэффициент по у
 */
void button::resize(float c1, float c2)
{
    this->coex=c1;
    this->coey=c2;
}
