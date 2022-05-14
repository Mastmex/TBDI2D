#include "menu.hpp" 

/**
 * @brief Construct a new menu::menu object
 * @author Mast_mex
 * @version 0.1
 * @details Загружает текстуры, требуемые для отрисовки меню
 */
menu::menu()
{
    this->bg = new sf::Texture;
    this->bg->loadFromFile("./resources/textures/menu/menu800600.png");
    this->bgs=new sf::Sprite();
    this->bgs->setTexture(*bg);
}


/**
 * @brief Отрисовка меню
 * @author Mast_mex
 * @version 0.1
 * @details Отрисовывает задники меню, а так же активные кнопки.
 * @param win 
 */
void menu::draw(sf::RenderWindow* win)
{
    this->bgs->setPosition(0,0);
    win->draw(*this->bgs);
}
