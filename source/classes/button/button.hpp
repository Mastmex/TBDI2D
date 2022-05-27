#ifndef BUTTON_HPP
#define BUTTON_HPP
/**
 * @brief Класс отвечающий за кнопки.
 * @author Mast_mex
 * @version 0.1
 * @details Класс отвечающий за создание кнопок и взаимодействие с ними.
 * 
 */
class button
{
private:
    float x;
    float y;
    float length;
    float height;
    float coex, coey;
public:
    button(float x, float y, float length, float height);
    button(){};
    virtual  bool isAbove(float x, float y);
    virtual void resize(float c1, float c2);
};

#endif