#include "menuButton.hpp"


menuButton::menuButton(float x, float y, float length, float height, sf::RenderWindow *wind)
{
    this->height = height;
    this->x = x;
    this->y = y;
    this->length = length;
    coex = 1;
    coey = 1;
    this->frame = new sf::Texture;
    this->frame->loadFromFile("./resources/textures/menu/frame.png");
    this->frames = new sf::Sprite;
    this->frames->setTexture(*this->frame);
    this->frames->setPosition(x,y);
    this->frames->scale(length/600.0,height/50.0);
    this->win=wind;
}
menuButton::~menuButton()
{
    delete this->win;
}
bool menuButton::isAbove(float x, float y)
{
    if((x>=this->x*this->coex && x<=(this->x*this->coex+this->length*this->coex) && y>=this->y*this->coey && y<=(this->y*this->coey+this->height*this->coey)))
        {
            this->win->draw(*this->frames);
            return true;
        }
    else return false;
}
void menuButton::resize(float c1, float c2)
{
    this->coex=c1;
    this->coey=c2;
    this->frames->scale(c1,c2);
}
