#ifndef MENU_HPP
#define MENU_HPP

#include "SFML/Graphics.hpp"

/**
 * @brief Класс, отвечающий за отображение меню.
 * @version 0.1
 * @author Mast_mex
 * @details Класс, отвечающий за отображение меню.
 * 
 */
class menu
{
private:
    sf::Texture* bg;
    sf::Sprite* bgs;
    sf::Texture* btn;
    sf::Sprite* btns;
public:
    menu();
    void draw(sf::RenderWindow* win);
    void resize(float x,float y);
};


#endif