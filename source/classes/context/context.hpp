#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "SFML/Graphics.hpp"
#include <string>
#include <iostream>
#include "./../button/button.hpp"

class context
{
private:
    button *left, *right;
    bool *lef, *rig;
    sf::Text *txt;
    sf::Font *font;
    sf::Texture *tex;
    sf::Sprite *sp;
    sf::Texture* frame;
    sf::Sprite* frames;
    bool showFrame;
    float initialPosX,initialPosY;
    float framepx, framepy;
public:
    context(std::string name,bool *var1, bool* var2,int size);
    void setPos(float x, float y);
    void resize(float x, float y);
    void show(sf::RenderWindow *x);
    void buttonCheck(sf::Vector2i ev);
    void buttonClicked(sf::Event ev);
    
    ~context();
};

#endif