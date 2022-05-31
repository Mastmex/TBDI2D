#include "menu.hpp" 
#include <iostream>

/**
 * @brief Construct a new menu::menu object
 * @author Mast_mex
 * @version 0.3
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
    /// \brief making buttons
    {
        this->bt1 = new button(200,245,400,50);
        this->bt2 = new button(200,305,400,50);
        this->bt3 = new button(200,365,400,50);
        this->bt4 = new button(200,425,400,50);
        this->bt5 = new button(200,485,400,50);
    }
    {
        this->frame = new sf::Texture;
        this->frame->loadFromFile("./resources/textures/menu/frame.png");
        this->frames = new sf::Sprite;
        this->frames->setTexture(*this->frame);
        this->frames->setPosition(200,245);
        this->showFrame = false;
        this->framepx=1;
        this->framepy=1;
    }
    this->curr=men::mmain;
    this->showCont=false;
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
        win->draw(*this->frames);
    if(this->showCont)
        this->con->show(win);
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
    this->frames->setScale(x/800.0,y/600.0);
    this->framepx = x/800.0;
    this->framepy = y/600.0;
    if(this->showCont)
        this->con->resize(x,y);
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
    if(this->bt1->isAbove(ev.x,ev.y))
        {
            this->frames->setPosition(200*this->framepx,245*this->framepy);
            this->showFrame = true;
            return;
        }
    if(this->bt2->isAbove(ev.x,ev.y))
        {
            this->frames->setPosition(200*this->framepx,305*this->framepy);
            this->showFrame = true;
            return;
        }
    if(this->bt3->isAbove(ev.x,ev.y))
        {
            this->frames->setPosition(200*this->framepx,365*this->framepy);
            this->showFrame = true;
            return;
        }
    if(this->bt4->isAbove(ev.x,ev.y))
        {
            this->frames->setPosition(200*this->framepx,425*this->framepy);
            this->showFrame = true;
            return;
        }
    if(this->bt5->isAbove(ev.x,ev.y))
        {
            this->frames->setPosition(200*this->framepx,485*this->framepy);
            this->showFrame = true;
            return;
        }
    this->showFrame = false;
    return;
}

void menu::buttonClicked(sf::Event ev)
{
    if(ev.mouseButton.button == sf::Mouse::Button::Left)
    {
        if(this->bt3->isAbove(ev.mouseButton.x,ev.mouseButton.y))
        {
            this->con = new context("Are you shure?",&this->l1,&this->l2,40);
            this->con->setPos(150,200);
            this->showCont=true;
        }
    }
}
