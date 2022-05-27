#include "menu.hpp" 
#include <iostream>

/**
 * @brief Construct a new menu::menu object
 * @author Mast_mex
 * @version 0.3
 * @details Загружает текстуры, требуемые для отрисовки меню
 */
menu::menu(sf::RenderWindow *win)
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
    /// \brief making buttons
    {
        this->bt1 = new menuButton(200,245,400,50,win);
        this->bt2 = new menuButton(200,305,400,50,win);
        this->bt3 = new menuButton(200,365,400,50,win);
        this->bt4 = new menuButton(200,425,400,50,win);
        this->bt5 = new menuButton(200,485,400,50,win);
    }
    {
        this->showFrame = false;
        this->framepx=1;
        this->framepy=1;
    }
    // this->curr=men::main;
}


/**
 * @brief Отрисовка меню
 * @author Mast_mex
 * @version 0.3
 * @details Отрисовывает задники меню, а так же активные кнопки.
 * @param win Окно, в котором производится отрисовка
 */
void menu::draw(sf::RenderWindow* win)
{
    
    win->draw(*this->bgs);
    win->draw(*this->btns);
        if(this->showFrame)
        win->draw(this->frame);

}

/**
 * @brief Изменение размеров окна
 * @author Mast_mex
 * @version 0.2
 * @details При изменении размеров окна, так же изменяет размер меню.
 * @param x Текущий размер экрана по горизониали
 * @param y Текущий размер экрана по вертикали
 */
void menu::resize(float x, float y)
{
    this->bgs->setScale(x/800.0,y/600.0);
    this->btns->setScale(x/800.0,y/600.0);
    this->btns->setPosition((x-400.0*(x/800.0))/2,245*y/600.0);
    this->bt1->resize(x/800.0,y/600.0);
    this->bt2->resize(x/800.0,y/600.0);
    this->bt3->resize(x/800.0,y/600.0);
    this->bt4->resize(x/800.0,y/600.0);
    this->bt5->resize(x/800.0,y/600.0);
    this->framepx = x/800.0;
    this->framepy = y/600.0;
}
/**
 * @brief Проверка нахождения курсора над кнопками
 * @author Mast_mex
 * @version 0.1
 * @details Проверяет нахождение курсора над кнопками и дорисовывает прямоугольник при соотвествии.
 * 
 * @param ev Координаты указателя мыши
 */
void menu::buttonCheck(sf::Vector2i ev)
{
    if(this->bt1->isAbove(ev.x,ev.y,&this->frame))
        this->showFrame=true;
    else if(this->bt2->isAbove(ev.x,ev.y,&this->frame))
        this->showFrame=true;
    else if(this->bt3->isAbove(ev.x,ev.y,&this->frame))
        this->showFrame=true;
    else if(this->bt4->isAbove(ev.x,ev.y,&this->frame))
        this->showFrame=true;
    else if(this->bt5->isAbove(ev.x,ev.y,&this->frame))
        this->showFrame=true;
    else this->showFrame=false;
    return;
}
