#include "intro.hpp"

intro::intro()
{
    this->ld = new sf::Texture;
    this->ld->loadFromFile("./resources/textures/intro/load.png");
    this->lds = new sf::Sprite;
    this->lds->setTexture(*this->ld);
    this->lds->setPosition(0,0);
    this->dis = new sf::Texture;
    this->dis->loadFromFile("./resources/textures/intro/disclaimer.png");
    this->diss = new sf::Sprite;
    this->diss->setTexture(*this->dis);
    this->diss->setPosition(0,0);
    this->prod = new sf::Texture;
    this->prod->loadFromFile("./resources/textures/intro/prod.png");
    this->prods = new sf::Sprite;
    this->prods->setTexture(*this->prod);
    this->prods->setPosition(0,0);
    timer = std::clock();
}

void intro::resize(float a, float b)
{
    this->lds->setScale(a/800.0,b/600.0);
    this->diss->setScale(a/800.0,b/600.0);
    this->prods->setScale(a/800.0,b/600.0);
}
void intro::draw(sf::RenderWindow *win)
{
    if((std::clock()-timer)/1000.0<=5)
    {
        win->draw(*this->lds);
    }
    if(((std::clock()-timer)/1000.0<=11) && ((std::clock()-timer)/1000.0>5)){
        win->draw(*this->diss);
    }
    if((std::clock()-timer)/1000.0>11)
        win->draw(*this->prods);
}