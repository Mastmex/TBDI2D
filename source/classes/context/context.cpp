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
    this->frame = new sf::Texture;
    this->frame->loadFromFile("./resources/textures/menu/frame2.png");
    this->frames = new sf::Sprite;
    this->frames->setTexture(*this->frame);
        this->showFrame = false;
        this->framepx=1;
        this->framepy=1;
}

void context::setPos(float x, float y)
{
    this->sp->setPosition(x-100.0,y-125.0);
    this->txt->setPosition(x+125.0,y+30.0);
    this->left = new button(x+77.0,y+90.0,100,50);
    this->right = new button(x+320.0,y+90.0,100,50);
    this->frames->setPosition(x+77.0,y+90.0);
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
    this->frames->setScale(x/800.0,y/600.0);
    this->framepx = x/800.0;
    this->framepy = y/600.0;
}
void context::show(sf::RenderWindow *x)
{
    x->draw(*this->sp);
    x->draw(*this->txt);
    if(this->showFrame)
        x->draw(*this->frames);
}

void context::buttonCheck(sf::Vector2i ev)
{
    if(this->left->isAbove(ev.x,ev.y))
        {
            this->frames->setPosition((initialPosX+77)*this->framepx,(initialPosY+90)*this->framepy);
            this->showFrame = true;
            return;
        }
    if(this->right->isAbove(ev.x,ev.y))
        {
            this->frames->setPosition((initialPosX+320)*this->framepx,(initialPosY+90)*this->framepy);
            this->showFrame = true;
            return;
        }
    this->showFrame=false;
}

void context::buttonClicked(sf::Event ev)
{
    if(this->left->isAbove(ev.mouseButton.x,ev.mouseButton.y))
        {
            *this->lef=true;
            return;
        }
    if(this->right->isAbove(ev.mouseButton.x,ev.mouseButton.y))
        {
            *this->rig=true;
            return;
        }
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