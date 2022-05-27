#ifndef MENU_HPP
#define MENU_HPP

#include "SFML/Graphics.hpp"
#include "./../button/button.hpp"
// #include "./../context/context.hpp"
#include "./../menuButton/menuButton.hpp"

// enum men{
//     main,
//     options,
//     exit
// };

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
    menuButton *bt1,*bt2,*bt3,*bt4,*bt5;
    sf::Sprite frame;
    // context *con;
    bool showFrame;
    float framepx, framepy;
    int curr;
public:
    menu(sf::RenderWindow *win);
    void draw(sf::RenderWindow* win);
    void resize(float x,float y);
    void buttonCheck(sf::Vector2i ev);
    void buttonClicked(sf::Event ev);
    void showCon();
    void var1(menu* x);
};


#endif