#ifndef MENU_HPP
#define MENU_HPP

#include "SFML/Graphics.hpp"
#include "./../button/button.hpp"

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
    button *bt1,*bt2,*bt3,*bt4,*bt5;
    sf::Texture* frame;
    sf::Sprite* frames;
    bool showFrame;
    float framepx, framepy;
public:
    menu();
    void draw(sf::RenderWindow* win);
    void resize(float x,float y);
    void buttonCheck(sf::Vector2i ev);
};


#endif