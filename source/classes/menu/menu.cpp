#include "menu.hpp" 
#include <iostream>

/**
 * @brief Construct a new menu::menu object
 * @author Mast_mex
 * @version 0.2
 * @details Загружает текстуры, требуемые для отрисовки меню
 */
menu::menu()
{   
    /// \brief loading background
    {
    this->bg = new sf::Texture;
    this->bg->loadFromFile("./resources/textures/menu/menu800600.png");
    this->bgs=new sf::Sprite();
    this->bgs->setTexture(*this->bg);
    this->bgs->setPosition(0,0);
    }
    /// \brief loading buttons
    {
    this->btn = new sf::Texture;    
    this->btn->loadFromFile("./resources/textures/menu/buttons.png");
    this->btns=new sf::Sprite();
    this->btns->setTexture(*this->btn);
    this->btns->setPosition(200,245);
    }

}


/**
 * @brief Отрисовка меню
 * @author Mast_mex
 * @version 0.2
 * @details Отрисовывает задники меню, а так же активные кнопки.
 * @param win Окно, в котором производится отрисовка
 */
void menu::draw(sf::RenderWindow* win)
{
    
    win->draw(*this->bgs);
    win->draw(*this->btns);
}

/**
 * @brief Изменение размеров окна
 * @author Mast_mex
 * @version 0.1
 * @details При изменении размеров окна, так же изменяет размер меню.
 * @param x Текущий размер экрана по горизониали
 * @param y Текущий размер экрана по вертикали
 */
void menu::resize(float x, float y)
{
    this->bgs->setScale(x/800.0,y/600.0);
    this->btns->setScale(x/800.0,y/600.0);
    this->btns->setPosition((x-400.0*(x/800.0))/2,245*y/600.0);
}
