#include "context.hpp"

context::context(std::string name,bool *var1, bool* var2,int size)
{
    this->font = new sf::Font();
    this->font->loadFromFile("./resources/fonts/centurygothic.ttf");
    this->lef=var1;
    this->rig=var2;
    this->txt= new sf::Text(name,*this->font,size);
    this->tex = new sf::Texture;
    this->tex->loadFromFile("./resources/textures/menu/context-2.png");
    this->sp = new sf::Sprite;
    this->sp->setTexture(*this->tex);
    this->txt->setColor(sf::Color::Red);
}

void context::setPos(float x, float y)
{
    this->sp->setPosition(x-100.0,y-125.0);
    this->txt->setPosition(x+125.0,y+30.0);
    this->left = new button(x+77.0,y+90.0,100,50);
    this->right = new button(x+320.0,y+90.0,100,50);
    this->initialPosX=x;
    this->initialPosY=y;
}

void context::resize(float x, float y)
{
    this->sp->setScale(x/800.0,y/600.0);
    this->sp->setPosition(initialPosX*(x/800.0)-100.0*(x/800.0),initialPosY*(y/600.0)-125.0*(y/600.0));
    this->txt->setScale(x/800.0,y/600.0);
    this->txt->setPosition(initialPosX*(x/800.0)+125.0*(x/800.0),initialPosY*(y/600.0)+30.0*(y/600.0));
    this->right->resize(x/800.0,y/600.0);
    this->left->resize(x/800.0,y/600.0);
}
void context::show(sf::RenderWindow *x)
{
    x->draw(*this->sp);
    x->draw(*this->txt);
}

context::~context()
{
    delete this->font;
    delete this->lef;
    delete this->left;
    delete this->rig;
    delete this->right;
    delete this->sp;
    delete this->tex;
    delete this->txt;
}